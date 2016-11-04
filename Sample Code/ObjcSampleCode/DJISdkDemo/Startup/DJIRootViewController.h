//
//  DJIRootViewController.h
//  DJISdkDemo
//
//  Copyright (c) 2015 DJI. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <DJISDK/DJISDK.h>


@interface DJIRootViewController : UIViewController<DJISDKManagerDelegate, DJIBatteryDelegate, DJIBaseProductDelegate>

-(IBAction) onConnectButtonClicked:(id)sender;

@end
