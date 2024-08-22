//
//  VideoPickerController.m
//  Unity-iPhone
//
//  Created by KanakoKunii on 2024/08/21.
//

#import "VideoPickerController.h"
#import <UIKit/UIKit.h>
#if __has_include(<UniformTypeIdentifiers/UniformTypeIdentifiers.h>)
#import <UniformTypeIdentifiers/UniformTypeIdentifiers.h>
#else
#import <MobileCoreServices/MobileCoreServices.h>
#endif
#import "UnityInterface.h"

@implementation VideoPickerController

- (void)showVideoPickerFromViewController:(UIViewController *)viewController
{
    UIImagePickerController *picker = [[UIImagePickerController alloc] init];
    picker.delegate = self;
    picker.sourceType = UIImagePickerControllerSourceTypePhotoLibrary;

    if (@available(iOS 14, *)) {
        picker.mediaTypes = @[(NSString *)UTTypeMovie.identifier];
    }

    [viewController presentViewController:picker animated:YES completion:nil];
}

- (void)imagePickerController:(UIImagePickerController *)picker didFinishPickingMediaWithInfo:(NSDictionary<UIImagePickerControllerInfoKey, id> *)info
{
    NSURL *videoURL = info[UIImagePickerControllerMediaURL];
    NSString *videoPath = [videoURL path];

    NSLog(@"Video Path: %@", videoPath);

    UnitySendMessage("VideoPicker", "OnVideoPicked", [videoPath UTF8String]);

    [picker dismissViewControllerAnimated:YES completion:nil];
}

- (void)imagePickerControllerDidCancel:(UIImagePickerController *)picker
{
    [picker dismissViewControllerAnimated:YES completion:nil];
}

@end

void ShowVideoPicker(void)
{
    UIViewController *rootViewController = [UIApplication sharedApplication].keyWindow.rootViewController;

    VideoPickerController *videoPicker = [[VideoPickerController alloc] init];
    [videoPicker showVideoPickerFromViewController:rootViewController];
}
