//
//  AppDelegate.h
//  JSONBusSample
//
//  Created by Chris Brody on 1/2/13.
//  Copyright (c) 2013 JSONBus. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate, UIWebViewDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) UIWebView *myview;

-(BOOL)webView:(UIWebView *)webView shouldStartLoadWithRequest:(NSURLRequest *)request navigationType:(UIWebViewNavigationType)navigationType;

@end
