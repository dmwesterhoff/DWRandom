//
//  DWRandomTests.m
//  DWRandomTests
//
//  Created by David Westerhoff on 03/03/2016.
//  Copyright (c) 2016 David Westerhoff. All rights reserved.
//

#import <DWRandom/DWRandom.h>
#import <XCTest/XCTest.h>

@interface DWRandomArrayTests : XCTestCase

@end

@implementation DWRandomArrayTests

- (void)setUp
{
    [super setUp];
    // Put setup code here. This method is called before the invocation of each test method in the class.
}

- (void)tearDown
{
    // Put teardown code here. This method is called after the invocation of each test method in the class.
    [super tearDown];
}

- (void)testExample
{
    NSArray* array = @[ @"foo", @"bar", @"baz" ];
    NSArray* emptyArray = @[];

    XCTAssertNotNil([array randomObject]);
    XCTAssertNil([emptyArray randomObject]);
}

@end
