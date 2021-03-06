// NSMutableArray+DWRandom.h
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
 *  Adds randomization functionality to the NSMutableArray collection
 */
@interface NSMutableArray (DWRandom)

/**-----------------------------------------------------------------------------
 * @name Instance Extension Methods
 * -----------------------------------------------------------------------------
 */

/**
 *  Used to retrieve a random object from the array. Gets a random index with the
 *  count as an upper bound and returns the object at that index.
 *
 *  @code
 *  id randomObject = [mutableArray randomObject];
 *  @endcode
 *
 *  @return A random object from the collection, or nil if there are no objects
 *  in the collection
 */
- (id)randomObject;

/**
 *  Shuffles the array in place with a Fisher-Yates shuffle.
 *
 *  @code
 *  [mutableArray randomShuffle];
 *  @endcode
 *
 */
- (void)randomShuffle;

/**-----------------------------------------------------------------------------
 * @name Class Extension Methods
 * -----------------------------------------------------------------------------
 */

/**
 *  Returns a shuffled copy of the array. The original is untouched.
 *
 *  @code
 *  NSMutableArray shuffledArray = [NSMutableArray randomShuffle:mutableArray];
 *  @endcode
 *
 *  @param array The array to be shuffled.
 *
 *  @return A deep copy of the array, newly shuffled
 */
+ (NSMutableArray*)randomShuffle:(NSMutableArray*)array;

@end
