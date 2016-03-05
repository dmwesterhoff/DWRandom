// UIColor+DWRandom.h
// Copyright (c) 2016 David Westerhoff
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

#import <UIKit/UIKit.h>

/**
 *  Adds randomization functionality to UIColor
 */
@interface UIColor (DWRandom)

/**-----------------------------------------------------------------------------
 * @name Class Extension Methods
 * -----------------------------------------------------------------------------
 */

/**
 *  Returns a color randomly by generating values for HSB, alpha defaults to 1
 *  so no all colors are opaque.
 *
 *  @return A random color
 */
+ (UIColor*)randomColor;

/**
 *  Returns a color randomly by generating values for HSB, with the provided
 *  alpha transparency value
 *
 *  @param alpha The alpha value in the range [0.0f-1.0f]
 *
 *  @return A random color with given alpha
 */
+ (UIColor*)randomColorWithAlpha:(CGFloat)alpha;

/**
 *  Returns a color randomly by generating values for HSB, alpha defaults to 1
 *  so no all colors are opaque.
 *
 *  @return A random color with a random alpha value
 */
+ (UIColor*)randomColorWithRandomAlpha;
@end
