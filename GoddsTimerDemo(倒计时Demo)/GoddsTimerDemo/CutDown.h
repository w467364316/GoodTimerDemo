//
//  CutDown.h
//  GoddsTimerDemo
//
//  Created by iMac-jianjian on 16/9/22.
//  Copyright © 2016年 iMac-jianjian. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CutDown : NSObject

-(void)creatTimerWit:(void(^)())completeBlock;

-(void)destroyTimer;
@end
