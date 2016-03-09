// NSNumber+DWRandom.m
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

#import "NSNumber+DWRandom.h"

@implementation NSNumber (DWRandom)

+ (BOOL)randomBool
{
    return arc4random_uniform(1);
}

+ (unsigned int)randomInteger
{
    return arc4random();
}

+ (unsigned int)randomIntegerWithMax:(unsigned int)max
{
    return arc4random_uniform(max + 1);
}

+ (unsigned int)randomIntegerWithMin:(unsigned int)min
                                 max:(unsigned int)max
{
    return min + arc4random_uniform(max - min + 1);
}

+ (NSNumber*)randomNumber
{
    return [NSNumber numberWithUnsignedInt:arc4random()];
}

+ (NSNumber*)randomNumberWithMax:(unsigned int)max
{
    return [NSNumber numberWithUnsignedInt:arc4random_uniform(max + 1)];
}

+ (NSNumber*)randomNumberWithMin:(unsigned int)min
                             max:(unsigned int)max
{
    return [NSNumber numberWithUnsignedInt:(min + arc4random_uniform(max - min + 1))];
}

@end
