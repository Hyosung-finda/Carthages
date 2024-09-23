//
//  The MIT License (MIT)
//
// Copyright (c) 2018 lizhuoli1126@126.com <lizhuoli1126@126.com>
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#import "_ChannelIO_SDWebImageSVGCoderDefine.h"
#import "_ChannelIO_SDImageLoader.h"

/**
 A BOOL value which specify whether we prefer the actual bitmap representation instead of vector representation for SVG image. This is because the UIImage on iOS 13+ (NSImage on macOS 10.15+) can use the vector image format, which support dynamic scale without losing any detail. However, for some image processing logic, user may need the actual bitmap representation to manage pixels. (NSNumber)
 If you don't provide this value, use NO for default value and prefer the vector format when possible.
 @note Deprecated, use `SDWebImageContextImageThumbnailPixelSize`. Pass CGSize.zero means the viewBox size of SVG.
 */
FOUNDATION_EXPORT _ChannelIO_SDWebImageContextOption _Nonnull const _ChannelIO_SDWebImageContextSVGPrefersBitmap API_DEPRECATED_WITH_REPLACEMENT("SDWebImageContextImageThumbnailPixelSize", macos(10.15, 10.15), ios(13.0, 13.0), watchos(6.0, 6.0), tvos(13.0, 13.0));

/**
 A CGSize raw value which specify the desired SVG image size during image loading. Because vector image like SVG format, may not contains a fixed size, or you want to get a larger size bitmap representation UIImage. (NSValue)
 If you don't provide this value, use viewBox size of SVG for default value.
 */
FOUNDATION_EXPORT _ChannelIO_SDWebImageContextOption _Nonnull const _ChannelIO_SDWebImageContextSVGImageSize API_DEPRECATED_WITH_REPLACEMENT("SDWebImageContextImageThumbnailPixelSize", macos(10.15, 10.15), ios(13.0, 13.0), watchos(6.0, 6.0), tvos(13.0, 13.0));

/**
 A BOOL value which specify the whether SVG image should keep aspect ratio during image loading. Because when you specify image size via `SDWebImageContextSVGImageSize`, we need to know whether to keep aspect ratio or not when image size aspect ratio is not equal to SVG viewBox size aspect ratio. (NSNumber)
 If you don't provide this value, use YES for default value.
 */
FOUNDATION_EXPORT _ChannelIO_SDWebImageContextOption _Nonnull const _ChannelIO_SDWebImageContextSVGImagePreserveAspectRatio API_DEPRECATED_WITH_REPLACEMENT("SDWebImageContextImagePreserveAspectRatio", macos(10.15, 10.15), ios(13.0, 13.0), watchos(6.0, 6.0), tvos(13.0, 13.0));
