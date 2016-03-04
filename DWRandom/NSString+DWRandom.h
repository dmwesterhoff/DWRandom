// NSString+DWRandom.h
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
 * @discussion Represents options when generating a random string
 */
typedef NS_ENUM(NSUInteger, DWRandomStringOption) {
    /*!
   * @discussion The default option includes uppercase letters, lowercase letters, and numbers
   *             the character set is 'abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXZY0123456789'
   */
    DWRandomStringOptionDefault,

    /*!
   * @discussion The option specifies all printable ascii characters, including punctuation
   */
    DWRandomStringOptionPrintableASCII,

    /*!
   * @discussion The option specifies only decimal numbers [0-9]
   */
    DWRandomStringOptionNumbers,

    /*!
   * @discussion The option specifies only letters, may be both capital case or lowercase
   */
    DWRandomStringOptionLetters,

    /*!
   * @discussion The option specifies only uppcase letters
   */
    DWRandomStringOptionUppercaseLetters,

    /*!
   * @discussion The option specifies only lowercase letters
   */
    DWRandomStringOptionLowercaseLetters,

    /*!
   * @discussion The option specifies only hex characters [0-F] with uppcase letters
   */
    DWRandomStringOptionHexUppercase,

    /*!
   * @discussion The option specifies only hex characters [0-f] with lowercase letters
   */
    DWRandomStringOptionHexLowercase
};

/*!
 * @discussion Provides a random functionality extension
 */
@interface NSString (DWRandom)

/**-----------------------------------------------------------------------------
 * @name Instance Extension Methods
 * -----------------------------------------------------------------------------
 */

/*!
* @discussion Randomly selects a character from the string
* @return A single character randomly chosen from the string instance or nil if the string is empty
*/
- (NSString*)randomCharacter;

/**-----------------------------------------------------------------------------
 * @name Class Extension Methods
 * -----------------------------------------------------------------------------
 */

/*!
 * @discussion Generates a random string of chosen length
 * @return The generated random string of given length
 * @param length The number of characters generated in the random string
 */
+ (NSString*)randomStringOfLength:(NSUInteger)length;

/*!
 * @discussion Generates a random string of any length and with a specific character set
 * @see DWRandomStringOption
 * @return The generated random string of given length and generation option
 * @param length The number of characters generated in the random string
 * @param option The character set option of what random characters to use
 */
+ (NSString*)randomStringOfLength:(NSUInteger)length
                           option:(DWRandomStringOption)option;

/*!
 * @discussion Generates a random string with a supplied list of characters and length
 * @return The generated random string of given length and with the characters supplied
 * @param length The number of characters generated in the random string
 * @param characterSet The character used, for example @"abc" would randomly choose from only those
 *                     letters
 */
+ (NSString*)randomStringOfLength:(NSUInteger)length
                     characterSet:(NSString*)characterSet;

/*!
 * @discussion Randomly shuffles the string, not done in place the original is kept untouched
 * @param string The input string to be shuffled
 */
+ (NSString*)randomShuffle:(NSString*)string;

@end
