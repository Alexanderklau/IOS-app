//
//  MHDisaledFieldViewController.h
//  MHTextField
//
//  Copyright (c) 2016 lwb
//

#import <UIKit/UIKit.h>
#import "DemoTextField.h"

@interface MHDisaledFieldViewController : UIViewController
@property (strong, nonatomic) IBOutlet DemoTextField *emailTextField;
@property (strong, nonatomic) IBOutlet DemoTextField *firstnameTextField;
@property (strong, nonatomic) IBOutlet DemoTextField *lastnameTextField;
@property (strong, nonatomic) IBOutlet DemoTextField *passwordTextField;

@end
