#!/bin/bash

# 仮想環境のアクティベーション
source myvenv/bin/activate

# 仮想環境が正しくアクティベートされているか確認
echo "Virtual environment activated"
which python
which pip

# Pythonスクリプトの実行
python Assets/StridedTransformerForUnity/develop_stridedtransformer_pose3d.py "$1" "$2" "$3"
