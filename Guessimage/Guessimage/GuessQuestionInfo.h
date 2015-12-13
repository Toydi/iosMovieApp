//
//  GuessQuestionInfo.h
//  Guessimage
//
//  Created by nju on 15/12/13.
//  Copyright © 2015年 nju. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface GuessQuestionInfo : NSObject

@property (nonatomic, copy) NSString *answer;

@property (nonatomic, copy) NSString *icon;

@property (nonatomic, copy) NSString *title;

@property (nonatomic, strong) NSArray *options;

- (instancetype)initWithDict:(NSDictionary *)dict;
+ (instancetype)questionWithDict:(NSDictionary *)dict;

@property (nonatomic, strong, readonly) UIImage *image;

+ (NSArray *)questions;

@end
