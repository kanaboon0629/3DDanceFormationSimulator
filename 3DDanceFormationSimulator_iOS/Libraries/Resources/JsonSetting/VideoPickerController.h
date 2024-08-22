//
//  VideoPickerController.h
//  Unity-iPhone
//
//  Created by KanakoKunii on 2024/08/21.
//

#ifndef VideoPickerController_h
#define VideoPickerController_h

#import <UIKit/UIKit.h>

@interface VideoPickerController : NSObject <UIImagePickerControllerDelegate, UINavigationControllerDelegate>

- (void)showVideoPickerFromViewController:(UIViewController *)viewController;

@end

// Cスタイルの関数としてエクスポート
void ShowVideoPicker(void);

#endif /* VideoPickerController_h */

