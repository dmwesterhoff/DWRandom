// NSString+DWRandom.m
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

#import "NSString+DWRandom.h"

@implementation NSString (DWRandom)

#pragma mark - Instance Methods
- (NSString*)randomCharacter
{
    return [self substringWithRange:NSMakeRange(arc4random_uniform((u_int32_t)[self length]), 1)];
}

#pragma mark - Static Methods
+ (NSString*)randomStringOfLength:(NSUInteger)length
                     characterSet:(NSString*)characterSet
{
    // Mutable string to append random characters to
    NSMutableString* randomString = [NSMutableString stringWithCapacity:length];

    // One by one append random characters to the array
    for (NSUInteger i = 0; i < length; i++) {
        u_int32_t randomIndex = arc4random() % [characterSet length];
        unichar c = [characterSet characterAtIndex:randomIndex];
        [randomString appendFormat:@"%C", c];
    }
    return randomString;
}

+ (NSString*)randomStringOfLength:(NSUInteger)length
                           option:(DWRandomStringOption)option
{
    // Parse the options
    NSString* characterSet;
    switch (option) {
    case DWRandomStringOptionDefault:
        characterSet = @"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXZY0123456789";
        break;
    case DWRandomStringOptionPrintableASCII:
        characterSet = @"0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ!\"#$%&'()*+,-./:;<=>?@[\\]^_`{|}~";
        break;
    case DWRandomStringOptionNumbers:
        characterSet = @"0123456789";
        break;
    case DWRandomStringOptionLetters:
        characterSet = @"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXZY";
        break;
    case DWRandomStringOptionUppercaseLetters:
        characterSet = @"ABCDEFGHIJKLMNOPQRSTUVWXZY";
        break;
    case DWRandomStringOptionLowercaseLetters:
        characterSet = @"abcdefghijklmnopqrstuvwxyz";
        break;
    case DWRandomStringOptionHexUppercase:
        characterSet = @"ABCDEF0123456789";
        break;
    case DWRandomStringOptionHexLowercase:
        characterSet = @"abcdef0123456789";
        break;
    default:
        characterSet = @"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXZY0123456789";
        break;
    }
    return [NSString randomStringOfLength:length characterSet:characterSet];
}

+ (NSString*)randomStringOfLength:(NSUInteger)length
{
    return [NSString randomStringOfLength:length option:DWRandomStringOptionDefault];
}

+ (NSString*)randomShuffle:(NSString*)string
{
    NSMutableString* randomizedText = [NSMutableString stringWithString:string];

    NSString* buffer;
    for (NSInteger i = randomizedText.length - 1, j; i >= 0; i--) {
        j = arc4random() % (i + 1);

        buffer = [randomizedText substringWithRange:NSMakeRange(i, 1)];
        [randomizedText replaceCharactersInRange:NSMakeRange(i, 1) withString:[randomizedText substringWithRange:NSMakeRange(j, 1)]];
        [randomizedText replaceCharactersInRange:NSMakeRange(j, 1) withString:buffer];
    }
    return randomizedText;
}

@end
