// NSNumber+DWRandom.h
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

#import <Foundation/Foundation.h>

/*!
 * @discussion Provides a random functionality extension
 */
@interface NSNumber (DWRandom)

/**-----------------------------------------------------------------------------
 * @name Class Extension Methods
 * -----------------------------------------------------------------------------
 */

/*!
 * @discussion Generates a random integer with a max at 4294967296 (0x100000000)
 */
+ (unsigned int)randomInteger;

/*!
 * @discussion Generates a random integer with an inclusive max, for example 5 will generate a
 *             a number from the set [0, 1, 2, 3, 4, 5]
 * @param max The inclusivive maximum of the random range used
 */
+ (unsigned int)randomIntegerWithMax:(unsigned int)max;

/*!
 * @discussion Generates a random integer with inclusive min and max, for example 1-5 will generate
 *             a number from the set [1, 2, 3, 4, 5]
 * @param max The inclusivive maximum of the random range used
 * @param min The inclusivive minimum of the random range used
 */
+ (unsigned int)randomIntegerWithMin:(unsigned int)min
                                 max:(unsigned int)max;

/*!
 * @discussion Generates a random number with a max at 4294967296 (0x100000000)
 */
+ (NSNumber*)randomNumber;

/*!
 * @discussion Generates a random integer with an inclusive max, for example 5 will generate a
 *             a number from the set [0, 1, 2, 3, 4, 5]
 * @param max The inclusivive maximum of the random range used
 */
+ (NSNumber*)randomNumberWithMax:(unsigned int)max;

/*!
 * @discussion Generates a random integer with inclusive min and max, for example 1-5 will generate
 *             a number from the set [1, 2, 3, 4, 5]
 * @param max The inclusivive maximum of the random range used
 * @param min The inclusivive minimum of the random range used
 */
+ (NSNumber*)randomNumberWithMin:(unsigned int)min
                             max:(unsigned int)max;

@end
