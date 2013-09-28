//
//  ViewController.h
//  HelloWorld
//
//  Created by Bruno Germano on 27/09/13.
//  Copyright (c) 2013 egermano.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (copy, nonatomic) NSString *userName;
- (NSString *)userName;
- (void)setUserName:(NSString *)newUserName;

@end
