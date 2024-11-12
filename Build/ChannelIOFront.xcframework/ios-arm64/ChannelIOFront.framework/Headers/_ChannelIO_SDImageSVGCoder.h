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

#import "_ChannelIO_SDImageCoder.h"
#import "_ChannelIO_SDWebImageSVGCoderDefine.h"

/***
SDImageSVGCoder is a SVG image coder, which use the built-in UIKit/AppKit method to decode SVG images. The SVG was implemented in iOS 13/macOS 10.15 with Symbol Image format, which is subset of SVG 1.1 or SVG 2 spec. If you find your SVG ccould not rendered correctly, please convert it by checking https://developer.apple.com/documentation/xcode/creating_custom_symbol_images_for_your_app

@note If you call the coder directly, use the coder option (See `SDWebImageSVGCoderDefine.h`) instead of the context option.
*/
@interface _ChannelIO_SDImageSVGCoder : NSObject <_ChannelIO_SDImageCoder>

@property (nonatomic, class, readonly) _ChannelIO_SDImageSVGCoder *sharedCoder;

@end
