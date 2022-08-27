#import <UIKit/UIKit.h>
#import <CoreMedia/CoreMedia.h>
#import <Foundation/Foundation.h>

@interface ImageUtils : NSObject

+ (UIImage *)cropImage:(UIImage *)image toRect:(CGRect)rect;

+ (UIImage *)fixOrientation:(UIImage *)image;

@end
