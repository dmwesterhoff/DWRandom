![Alt text](/logo.png?raw=true "DWRandom")
------------------------------------------

[![CI Status](https://travis-ci.org/dmwesterhoff/DWRandom.svg?branch=master)](https://travis-ci.org/David Westerhoff/DWRandom)
[![Version](https://img.shields.io/cocoapods/v/DWRandom.svg?style=flat)](http://cocoapods.org/pods/DWRandom)
[![License](https://img.shields.io/cocoapods/l/DWRandom.svg?style=flat)](http://cocoapods.org/pods/DWRandom)
[![Platform](https://img.shields.io/cocoapods/p/DWRandom.svg?style=flat)](http://cocoapods.org/pods/DWRandom)

Sometimes life calls for a bit of randomness.

Whether or not its grabbing a marble from a bag, a card from a deck or
something else entirely this library will give you a simple yet powerful
addition to Foundation objects functionality, random behavior.

DWRandom is a lightweight framework written in Objective-C that makes working
with randomization in many of the Foundation core objects a breeze. The
interface is extension based and aims to be dead simple to use and
effortless to learn. Use DWRandom if you want to add a deadly one liner for
randomization in your project.

### Table of Contents
---------------------

- [DWRandom](#DWRandom)
* [Install](#install)
* [Usage](#usage)
* [Docs](#docs)
* [Contributing](#contributing)
* [History](#history)
* [Author](#author)
* [License](#license)

### Install
-----------

###### Cocoapods

DWRandom is available through [CocoaPods](http://cocoapods.org). To install
it, simply add the following line to your Podfile:

```
pod "DWRandom"
```

Now you can add to your project with

```objc
#import <DWRandom/DWRandom.h>
```

###### Source

You can clone the repo with git:

```
git clone https://github.com/dmwesterhoff/DWRandom.git
```

then simply add the files to your project, and use a local import header

```objc
#import "DWRandom.h"
```

### Usage
---------

To make things easy to remember all methods in the DWRandom library are 
prefixed with the word 'random'. For example choosing a random element from
an array.

```objc
id randomObject = [array randomObject];
```

or grabbing a random UIColor...

```objc
UIColor *randomColor = [UIColor randomColor];
```

Easy to remember right? Heres a comprehensive list of all available methods,
for copy-paste snippets showing usage and examples check out the [Docs](#docs)

#### Foundation+DWRandom

###### NSArray

```objc
- (id)randomObject;
```

#### UIKit+DWRandom

###### UIColor

```objc
- (UIColor*)randomColor;
```

### Docs
--------

Coming soon...

### Contributing
----------------

1. Fork it
2. Create your feature branch: `git checkout -b my-new-feature`
3. Commit your changes: `git commit -am 'Add some feature'`
4. Push to the branch: `git push origin my-new-feature`
5. Submit a pull request

### History
-----------

v1.0 - Intial project release *(3/6/16)*

### Author
----------

David Westerhoff - dmwesterhoff@gmail.com

### License
-----------

The MIT License (MIT)

Copyright (c) 2016 David M. Westerhoff

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
