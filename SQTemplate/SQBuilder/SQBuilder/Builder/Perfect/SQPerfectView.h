//
//  ViewTemplate.h
//  SQTemplate
//
//  Created by 双泉 朱 on 17/5/5.
//  Copyright © 2017年 Doubles_Z. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SQPerfectInterface.h"

@interface SQPerfectView : UIView <SQPerfectViewInterface>

@property (nonatomic,strong) id<SQPerfectViewModelInterface> perfectOperation;
@property (nonatomic,strong) id<SQPerfectViewModelInterface> perfectViewModel;

@end