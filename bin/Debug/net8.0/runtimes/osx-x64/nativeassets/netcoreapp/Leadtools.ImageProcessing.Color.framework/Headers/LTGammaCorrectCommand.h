// *************************************************************
// Copyright (c) 1991-2022 LEAD Technologies, Inc.
// All Rights Reserved.
// *************************************************************
//
//  LTGammaCorrectCommand.h
//  Leadtools.ImageProcessing.Color
//

#import <Leadtools/LTRasterCommand.h>

NS_ASSUME_NONNULL_BEGIN

NS_CLASS_AVAILABLE(10_10, 8_0)
@interface LTGammaCorrectCommand : LTRasterCommand

@property (nonatomic, assign) NSUInteger gamma;

- (instancetype)initWithGamma:(NSUInteger)gamma NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END
