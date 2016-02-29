//
//  SYTableHeader.h
//  zhihuDaily
//
//  Created by yang on 16/2/26.
//  Copyright © 2016年 yang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SYEditor.h"

@interface SYTableHeader : UIView

@property (nonatomic, strong) NSArray<NSString *> *avatars;

+ (instancetype)headerViewWitTitle:(NSString *)title hidenRight:(BOOL)hiden;



@end
