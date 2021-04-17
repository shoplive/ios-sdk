//
//  ViewController.m
//  ShopLiveObjectivCSample
//
//  Created by purpleworks on 2021/03/18.
//

#import "ViewController.h"
#import <ShopLiveSDK/ShopLiveSDK-Swift.h>

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
}

- (IBAction)didTouchPlayButton:(id)sender {
    [ShopLive playWith:@"CAMPAIGN_KEY"];
}

- (IBAction)didTouchSignInButton:(id)sender {
    NSLog(@"start signin");
    dispatch_async(dispatch_get_main_queue(), ^{
        NSString *userId = @"customerId";
        NSString *userName = @"customer";
        NSInteger userAge = 30;
        Gender userGender = GenderMale;
        
        NSLog(@"complete signin");
        NSLog(@"user id: %@", userId);
        NSLog(@"user name: %@", userName);
        NSLog(@"user age: %ld", (long)userAge);
        NSLog(@"user gender: %ld", (long)userGender);

        ShopLiveUser *user = [[ShopLiveUser alloc] initWithId: userId name: userName gender: userGender age: userAge];
        [ShopLive setUser: user];
        [ShopLive playWith: @"CAMPAIGN_KEY"];
    });
}

- (IBAction)didTouchCustomSizePipPlayButton:(id)sender {
    [ShopLive setPipScale: 0.2];
    [ShopLive playWith: @"CAMPAIGN_KEY"];
}

- (IBAction)didTouchCustomPositionPipPlayButton:(id)sender {
    [ShopLive setPipPosition: PipPositionTopLeft];
    [ShopLive playWith: @"CAMPAIGN_KEY"];
}

@end
