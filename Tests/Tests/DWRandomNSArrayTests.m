//
//  DWRandomTests.m
//  DWRandomTests
//
//  Created by David Westerhoff on 03/03/2016.
//  Copyright (c) 2016 David Westerhoff. All rights reserved.
//

#import <DWRandom/DWRandom.h>
#import <XCTest/XCTest.h>

@interface DWRandomNSArrayTests : XCTestCase

@end

@implementation DWRandomNSArrayTests

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

- (void)testRandomObjectReturns
{
    NSArray* array = @[ @"foo", @"bar", @"baz" ];
    XCTAssertNotNil([array randomObject]);
}

- (void)testEmptyArrayReturnsNil
{
    NSArray* emptyArray = @[];
    XCTAssertNil([emptyArray randomObject]);
}

@end
