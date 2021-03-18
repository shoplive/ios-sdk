//
//  SceneDelegate.m
//  ShopLiveObjectivCSample
//
//  Created by purpleworks on 2021/03/18.
//

#import "SceneDelegate.h"
#import <ShopLiveSDK/ShopLiveSDK-Swift.h>
#import <SafariServices/SafariServices.h>

@interface SceneDelegate () <ShopLiveSDKDelegate>

@end

@implementation SceneDelegate


- (void)scene:(UIScene *)scene willConnectToSession:(UISceneSession *)session options:(UISceneConnectionOptions *)connectionOptions {
    // Use this method to optionally configure and attach the UIWindow `window` to the provided UIWindowScene `scene`.
    // If using a storyboard, the `window` property will automatically be initialized and attached to the scene.
    // This delegate does not imply the connecting scene or session are new (see `application:configurationForConnectingSceneSession` instead).
    
    [ShopLive configureWith:@"ACCESS_KEY"];
    [ShopLive setDelegate:self];
}


- (void)sceneDidDisconnect:(UIScene *)scene {
    // Called as the scene is being released by the system.
    // This occurs shortly after the scene enters the background, or when its session is discarded.
    // Release any resources associated with this scene that can be re-created the next time the scene connects.
    // The scene may re-connect later, as its session was not necessarily discarded (see `application:didDiscardSceneSessions` instead).
}


- (void)sceneDidBecomeActive:(UIScene *)scene {
    // Called when the scene has moved from an inactive state to an active state.
    // Use this method to restart any tasks that were paused (or not yet started) when the scene was inactive.
}


- (void)sceneWillResignActive:(UIScene *)scene {
    // Called when the scene will move from an active state to an inactive state.
    // This may occur due to temporary interruptions (ex. an incoming phone call).
}


- (void)sceneWillEnterForeground:(UIScene *)scene {
    // Called as the scene transitions from the background to the foreground.
    // Use this method to undo the changes made on entering the background.
}


- (void)sceneDidEnterBackground:(UIScene *)scene {
    // Called as the scene transitions from the foreground to the background.
    // Use this method to save data, release shared resources, and store enough scene-specific state information
    // to restore the scene back to its current state.
}


- (void)handleDownloadCouponWith:(NSString * _Nonnull)couponId completion:(void (^ _Nonnull)(void))completion {
    NSLog(@"handle download coupon: %@", couponId);
    dispatch_async(dispatch_get_main_queue(), ^{
        NSLog(@"complete download coupon: %@", couponId);
        completion();
    });
}

- (void)handleNavigationWith:(NSURL * _Nonnull)url {
    [ShopLive startPictureInPicture];
    SFSafariViewController *safari = [[SFSafariViewController alloc] initWithURL:url];
    [self.window.rootViewController presentViewController:safari animated:YES completion:^{
        
    }];
}
@end
