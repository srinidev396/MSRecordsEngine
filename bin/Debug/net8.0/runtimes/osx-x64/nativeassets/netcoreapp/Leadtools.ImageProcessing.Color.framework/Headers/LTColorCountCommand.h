// *************************************************************
// Copyright (c) 1991-2022 LEAD Technologies, Inc.
// All Rights Reserved.
// *************************************************************
//
//  LTColorCountCommand.h
//  Leadtools.ImageProcessing.Color
//

#import <Leadtools/LTRasterCommand.h>

NS_CLASS_AVAILABLE(10_10, 8_0)
@interface LTColorCountCommand : LTRasterCommand

@property (nonatomic, assign, readonly) NSUInteger colorCount;

@end
