//
//  UUImage.h
//  Useful Utilities - UIImage extensions
//
//  Created by Jonathan on 3/11/13.
//
//	License:
//  You are free to use this code for whatever purposes you desire. The only requirement is that you smile everytime you use it.
//
//  Contact: @cheesemaker or jon@threejacks.com

#import <Foundation/Foundation.h>

@interface UIImage (UUFramework)

- (UIImage*) uuScaleToSize:(CGSize)targetSize;
- (UIImage*) uuScaleAndCropToSize:(CGSize)targetSize;
- (UIImage*) uuCropToSize:(CGSize)targetSize;
- (UIImage*) uuBlurWithRadius:(CGFloat)blurRadius tintColor:(UIColor *)tintColor saturationDeltaFactor:(CGFloat)saturationDeltaFactor maskImage:(UIImage *)maskImage;

+ (UIImage*) uuViewToImage:(UIView*)view;

- (UIImage*) uuScaleToWidth:(CGFloat)width;

+ (UIImage*) uuMakeStretchableImage:(NSString*)imageName insets:(UIEdgeInsets)insets;

+ (UIImage*) uuSolidColorImage:(UIColor*)color;
+ (UIImage*) uuSolidColorImage:(UIColor*)color cornerRadius:(CGFloat)cornerRadius borderColor:(UIColor*)borderColor borderWidth:(CGFloat)borderWidth;

+ (UIImage*) uuSolidColorImage:(UIColor*)color
                  cornerRadius:(CGFloat)cornerRadius
                   borderColor:(UIColor*)borderColor
                   borderWidth:(CGFloat)borderWidth
                roundedCorners:(UIRectCorner)roundedCorners;

@end


@interface UIImage (UUAnimatedGIF)

+ (UIImage*) uuImageWithGIFData:(NSData*)data;

@end