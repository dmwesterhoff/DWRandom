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

/**
 *  Adds randomization functionality to NSNumber
 */
@interface NSNumber (DWRandom)

/**-----------------------------------------------------------------------------
 * @name Class Extension Methods
 * -----------------------------------------------------------------------------
 */

/**
 *  Generates a random integer with a max at 4294967296 (0x100000000)
 *
 *  @code
 *  unsigned int randomNumber = [NSNumber randomInteger];
 *  @endcode
 *
 *  @return A random unsigned integer
 */
+ (unsigned int)randomInteger;

/**
 *  Generates a random integer with an inclusive max, for example 5 will 
 *  generate a number from the set [0, 1, 2, 3, 4, 5]
 *
 *  @code
 *  unsigned int randomNumber = [NSNumber randomIntegerWithMin:5];
 *  @endcode
 *
 *  @param max The inclusivive maximum of the random range used
 *
 *  @return A random unsigned integer
 */
+ (unsigned int)randomIntegerWithMax:(unsigned int)max;

/**
 *  Generates a random integer with inclusive min and max, for example 1-5 will 
 *  generate a number from the set [1, 2, 3, 4, 5]
 *
 *  @code
 *  unsigned int randomNumber = [NSNumber randomIntegerWithMin:1 withMax:5];
 *  @endcode
 *
 *  @param min The inclusivive minimum of the random range used
 *  @param max The inclusivive maximum of the random range used
 *
 *  @return A random unsigned integer
 */
+ (unsigned int)randomIntegerWithMin:(unsigned int)min
                                 max:(unsigned int)max;

/**
 *  Generates a random number with a max at 4294967296 (0x100000000)
 *
 *  @code
 *  NSNumber *randomNumber = [NSNumber randomNumber];
 *  @endcode
 *
 *  @return A random number
 */
+ (NSNumber*)randomNumber;

/**
 *  Generates a random integer with an inclusive max, for example 5 will
 *  generate a number from the set [0, 1, 2, 3, 4, 5]
 *
 *  @code
 *  NSNumber *randomNumber = [NSNumber randomNumberWithMax:5];
 *  @endcode
 *
 *  @param max The inclusivive maximum of the random range used
 *
 *  @return A random number
 */
+ (NSNumber*)randomNumberWithMax:(unsigned int)max;

/**
 *  Generates a random integer with inclusive min and max, for example 1-5 will
 *  generate a number from the set [1, 2, 3, 4, 5]
 *
 *  @code
 *  NSNumber *randomNumber = [NSNumber randomNumberWithMin:1 withMax:5];
 *  @endcode
 *
 *  @param min The inclusivive minimum of the random range used
 *  @param max The inclusivive maximum of the random range used
 *
 *  @return A random number
 */
+ (NSNumber*)randomNumberWithMin:(unsigned int)min
                             max:(unsigned int)max;

@end
