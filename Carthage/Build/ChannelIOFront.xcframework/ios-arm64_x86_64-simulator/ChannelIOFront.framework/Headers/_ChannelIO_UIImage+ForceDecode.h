/*
 * This file is part of the SDWebImage package.
 * (c) Olivier Poitrey <rs@dailymotion.com>
 *
 * For the full copyright and license information, please view the LICENSE
 * file that was distributed with this source code.
 */

#import "_ChannelIO_SDWebImageCompat.h"

/**
 UIImage category about force decode feature (avoid Image/IO's lazy decoding during rendering behavior).
 */
@interface UIImage (_ChannelIO_ForceDecode)

/**
 A bool value indicating whether the image has already been decoded. This can help to avoid extra force decode.
 */
@property (nonatomic, assign) BOOL _ChannelIO_sd_isDecoded;

/**
 Decode the provided image. This is useful if you want to force decode the image before rendering to improve performance.

 @param image The image to be decoded
 @return The decoded image
 */
+ (nullable UIImage *)_ChannelIO_sd_decodedImageWithImage:(nullable UIImage *)image;

/**
 Decode and scale down the provided image

 @param image The image to be decoded
 @return The decoded and scaled down image
 */
+ (nullable UIImage *)_ChannelIO_sd_decodedAndScaledDownImageWithImage:(nullable UIImage *)image;

/**
 Decode and scale down the provided image with limit bytes
 
 @param image The image to be decoded
 @param bytes The limit bytes size. Provide 0 to use the build-in limit.
 @return The decoded and scaled down image
 */
+ (nullable UIImage *)_ChannelIO_sd_decodedAndScaledDownImageWithImage:(nullable UIImage *)image limitBytes:(NSUInteger)bytes;

@end
