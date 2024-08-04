# -*- coding: utf-8 -*-
"""Develop_StridedTransformer_Pose3D.ipynb

Automatically generated by Colab.

Original file is located at
    https://colab.research.google.com/drive/1ytwLvQXuDdV6a60wjwuwb2-zEXXEsE9z

<a href="https://colab.research.google.com/github/miswhiramon/3d-human-pose-estimation-colab/blob/main/StridedTransformer_Pose3D.ipynb" target="_blank"><img src="https://colab.research.google.com/assets/colab-badge.svg" alt="Open In Colab"/></a>
<br>
GitHub<br>
https://github.com/Vegetebird/StridedTransformer-Pose3D<br>
論文<br>
https://arxiv.org/abs/2103.14304<br>

参考記事<br>
https://www.12-technology.com/2022/07/stridedtransformer-pose3d-python.html
"""

#!python3 -V

"""## GPU確認"""

#!nvidia-smi

"""## Githubからソースコード取得"""

# Commented out IPython magic to ensure Python compatibility.
# %cd /content

#!git clone https://github.com/Vegetebird/StridedTransformer-Pose3D.git
#!git clone https://github.com/miswhiramon/3d-human-pose-estimation.git

"""## ライブラリのインストール"""

# Commented out IPython magic to ensure Python compatibility.
#%cd /content/StridedTransformer-Pose3D
# %cd /content/3d-human-pose-estimation

# !pip install wheel setuptools pip --upgrade

# !pip install --upgrade gdown
# !pip install yacs
# !pip install filterpy
# !pip install einops
# !pip install yt-dlp moviepy
# #!pip install matplotlib==3.0.3
# !pip install matplotlib
# !pip install imageio==2.4.1

#from yt_dlp import YoutubeDL
import cv2
# print(cv2.__version__)
# !python -V
"""## ライブラリのインポート"""

# Commented out IPython magic to ensure Python compatibility.
#%cd /content/StridedTransformer-Pose3D
# %cd /content/3d-human-pose-estimation

import os

from yt_dlp import YoutubeDL

from moviepy.video.fx.resize import resize
from moviepy.editor import VideoFileClip, AudioFileClip, ImageSequenceClip, CompositeAudioClip
from moviepy.video.io.ffmpeg_tools import ffmpeg_extract_subclip

"""## 学習済みモデルのセットアップ"""

# Commented out IPython magic to ensure Python compatibility.
#%cd /content/StridedTransformer-Pose3D
# %cd /content/3d-human-pose-estimation
# !mkdir -p ./checkpoint/pretrained

# if not os.path.exists('checkpoint/pretrained/refine_4365.pth'):
#   !gdown https://drive.google.com/uc?id=1aDLu0SB9JnPYZOOzQsJMV9zEIHg2Uro7 -O checkpoint/pretrained/refine_4365.pth
# if not os.path.exists('checkpoint/pretrained/no_refine_4365.pth'):
#   !gdown https://drive.google.com/uc?id=1l63AI9BsNovpfTAbfAkySo9X2MOWgYZH -O checkpoint/pretrained/no_refine_4365.pth

# if not os.path.exists('demo/lib/checkpoint/yolov3.weights'):
#   !gdown https://drive.google.com/uc?id=1gWZl1VrlLZKBf0Pfkj4hKiFxe8sHP-1C -O demo/lib/checkpoint/yolov3.weights
# if not os.path.exists('demo/lib/checkpoint/pose_hrnet_w48_384x288.pth'):
#   !gdown https://drive.google.com/uc?id=1CpyZiUIUlEjiql4rILwdBT4666S72Oq4 -O demo/lib/checkpoint/pose_hrnet_w48_384x288.pth

"""# テスト動画のセットアップ
47-62

## 動画のトリミング
"""

# Commented out IPython magic to ensure Python compatibility.
#%cd /content/StridedTransformer-Pose3D/demo/video

# %cd /content/3d-human-pose-estimation/demo/video
video_url = 'https://youtu.be/wYzGtkcttVE?si=CxQSTlkwB5-NYnp6' #@param {type:"string"}

#@markdown 動画の切り抜き範囲(秒)を指定してください。\
#@markdown 30秒以上の場合OOM発生の可能性が高いため注意
start_sec =  0#@param {type:"integer"}
end_sec =  4#@param {type:"integer"}

(start_pt, end_pt) = (start_sec, end_sec)

download_resolution = 360
base_dir = os.path.dirname(os.path.abspath(__file__))

full_video_path = os.path.join(base_dir, '3d-human-pose-estimation/demo/video/full_video.mp4')
file_name = 'input_clip.mp4'
input_clip_path = os.path.join(base_dir, '3d-human-pose-estimation/demo/video', file_name)

# 利用可能なフォーマットを取得
ydl_opts = {'listformats': True}
with YoutubeDL(ydl_opts) as ydl:
    info_dict = ydl.extract_info(video_url, download=False)
    formats = info_dict.get('formats', [])
    
    # heightがNoneまたは0でないフォーマットのみを対象に最高のフォーマットを選択
    best_format = max(
        (fmt for fmt in formats if fmt.get('height') is not None),
        key=lambda x: x.get('height', 0),
        default=None
    )

# best_formatがNoneでないことを確認してからダウンロード
if best_format:
    ydl_opts = {'format': best_format['format_id'], 'overwrites': True, 'outtmpl': full_video_path}
    with YoutubeDL(ydl_opts) as ydl:
        ydl.download([video_url])
else:
    print("No valid format found")

# 指定区間切り抜き
with VideoFileClip(full_video_path) as video:
    subclip = video.subclip(start_pt, end_pt)
    subclip.write_videofile(input_clip_path)

"""## スローモーション化
https://watlab-blog.com/2019/09/28/movie-speed/

やらなくても良い↓
"""

import cv2
import math

# 動画を読み込み、FPSを変更して別名で保存する関数
def m_speed_change(path_in, path_out, scale_factor, color_flag):
    # 動画読み込みの設定
    movie = cv2.VideoCapture(path_in)

    # 動画ファイル保存用の設定
    fps = movie.get(cv2.CAP_PROP_FPS)                                  # 元動画のFPSを取得
    fps_round = math.floor(fps+1)   #fps小数点以下の切り上げ
    fps_new = int(fps_round * scale_factor)                            # 動画保存時のFPSはスケールファクターをかける
    print("scale:{},fps:{},fps_round:{},fps_new:{}".format(scale_factor,fps,fps_round,fps_new))
    w = int(movie.get(cv2.CAP_PROP_FRAME_WIDTH))                            # 動画の横幅を取得
    h = int(movie.get(cv2.CAP_PROP_FRAME_HEIGHT))                           # 動画の縦幅を取得
    fourcc = cv2.VideoWriter_fourcc('m', 'p', '4', 'v')                     # 動画保存時のfourcc設定（mp4用）
    video = cv2.VideoWriter(path_out, fourcc, fps_new, (w, h), color_flag)  # 動画の仕様（ファイル名、fourcc, FPS, サイズ）

    # ファイルからフレームを1枚ずつ取得して動画処理後に保存する
    while True:
        ret, frame = movie.read()        # フレームを取得
        video.write(frame)               # 動画を保存する
        # フレームが取得できない場合はループを抜ける
        if not ret:
            break
    # 撮影用オブジェクトとウィンドウの解放
    movie.release()
    return

path_in = input_clip_path         # 元動画のパス
slow_motion_filename = 'fps_changed_input_video.mp4'
path_out = os.path.join(base_dir, '3d-human-pose-estimation/demo/video', slow_motion_filename)     # 保存する動画のパス
scale_factor = 1/6              # FPSにかけるスケールファクター
color_flag = True               # カラー動画はTrue, グレースケール動画はFalse

# 動画の再生速度を変更する関数を実行
m_speed_change(path_in, path_out, scale_factor, color_flag)

"""## 3D Human Pose Estimation

スローモーション動画でやるなら4行目を実行↓
"""

# Commented out IPython magic to ensure Python compatibility.
#%cd /content/StridedTransformer-Pose3D
# %cd /content/3d-human-pose-estimation

import subprocess

subprocess.run(["python3", os.path.join(base_dir, '3d-human-pose-estimation/demo/vis.py'), "--video", file_name])
#!python3 demo/vis.py --video {file_name}
#!python3 demo/vis.py --video {slow_motion_filename}

# clip = VideoFileClip('/StridedTransformer/3d-human-pose-estimation/demo/video/input_clip.mp4')
# clip = resize(clip, height=420)
# clip.ipython_display()


# """#ドライブに保存"""

# from google.colab import drive
# drive.mount('/content/drive')

# """##ダンス動画とjsonファイルを保存"""

# from moviepy.editor import VideoFileClip
# import os
# import json

# # Google Driveへの動画保存関数
# def save_video_to_drive(video_clip, drive_path, file_name):
#     try:
#         video_clip.write_videofile(os.path.join(drive_path, file_name), codec="libx264", audio_codec="aac")
#         print(f"動画を {drive_path}/{file_name} に保存しました。")
#     except Exception as e:
#         print(f"動画の保存中にエラーが発生しました: {e}")

# # Google Driveフォルダのパス
# movie_drive_folder_path = "/content/drive/MyDrive/3Dmodel_movie_mp4"
# json_drive_folder_path = "/content/drive/MyDrive/3Dmodel_skeleton_json"

# # ファイル名の入力
# file_name = "hulaDance" #@param {type:"string"}

# # 動画ファイルをロード
# clip = VideoFileClip('/content/3d-human-pose-estimation/demo/output/input_clip/input_clip.mp4')
# clip = resize(clip, height=420)

# # Google Driveに動画を保存
# video_file_name = file_name + ".mp4"
# save_video_to_drive(clip, movie_drive_folder_path, video_file_name)

# # JSONファイルの名前を変更して保存
# def rename_json_file(old_filename, new_filename):
#     try:
#         with open(old_filename, 'r', encoding='utf-8') as file:
#             data = json.load(file)
#     except FileNotFoundError:
#         print(f"指定されたファイル '{old_filename}' が見つかりません。")
#         return
#     except json.JSONDecodeError as e:
#         print(f"JSONファイル '{old_filename}' を読み込めませんでした: {e}")
#         return

#     try:
#         with open(new_filename, 'w', encoding='utf-8') as file:
#             json.dump(data, file, indent=4, ensure_ascii=False)
#         print(f"ファイル '{old_filename}' を '{new_filename}' に変更して保存しました。")
#     except OSError as e:
#         print(f"ファイル '{new_filename}' を保存できませんでした: {e}")

# # JSONファイルの名前を変更して保存
# json_file_name = file_name + ".json"
# rename_json_file('skeleton_coord.json', os.path.join(json_drive_folder_path, json_file_name))