// NSArray+DWRandom.m
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

#import "NSArray+DWRandom.h"

@implementation NSArray (DWRandom)

#pragma mark - Instance Methods
- (id)randomObject
{
    if ([self count] > 0) {
        NSUInteger randomIndex = arc4random_uniform((unsigned int)[self count]);
        return self[randomIndex];
    }
    else {
        return nil;
    }
}

#pragma mark - Static Methods
+ (NSArray*)randomShuffle:(NSArray*)array
{
    NSMutableArray* randomArray = [NSMutableArray arrayWithArray:array];
    NSUInteger count = [randomArray count];
    // Fisher-Yates shuffle
    if (count > 1) {
        for (NSUInteger i = count - 1; i > 0; --i) {
            [randomArray exchangeObjectAtIndex:i
                             withObjectAtIndex:arc4random_uniform((int32_t)(i + 1))];
        }
    }
    return randomArray;
}

@end
