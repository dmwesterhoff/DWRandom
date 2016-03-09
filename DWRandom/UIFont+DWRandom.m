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

#import "UIFont+DWRandom.h"

@implementation UIFont (DWRandom)

+ (UIFont*)randomFontWithSize:(CGFloat)size
{
    // Gather all available font names into an array
    NSMutableArray* allFonts = [[NSMutableArray alloc] init];
    NSArray* fontFamilies = [UIFont familyNames];
    for (int i = 0; i < [fontFamilies count]; i++) {
        NSArray* fontNames = [UIFont fontNamesForFamilyName:[fontFamilies objectAtIndex:i]];
        [allFonts addObjectsFromArray:fontNames];
    }
    // Select one at random
    if ([allFonts count] > 0) {
        NSUInteger randomIndex = arc4random_uniform((unsigned int)[allFonts count]);
        NSString* randomFontName = allFonts[randomIndex];
        return [UIFont fontWithName:randomFontName size:size];
    }
    else {
        return nil;
    }
}

@end
