// *************************************************************
// Copyright (c) 1991-2022 LEAD Technologies, Inc.
// All Rights Reserved.
// *************************************************************
//
//  LTBarcodeReadOptions.h
//  Leadtools.Barcode
//

#import <Leadtools/LTRasterColor.h>
#import <Leadtools.Barcode/LTBarcodeOptions.h>

NS_ASSUME_NONNULL_BEGIN

NS_CLASS_AVAILABLE(10_10, 8_0)
@interface LTBarcodeReadOptions : LTBarcodeOptions

@property (nonatomic, copy, readonly)  NSString *friendlyName;

@property (nonatomic, copy)            LTRasterColor *foreColor;
@property (nonatomic, copy)            LTRasterColor *backColor;

@end

NS_ASSUME_NONNULL_END
