//
//  Students.h
//  iosAppXaem
//
//  Created by Student on 12/1/14.
//  Copyright (c) 2014 Student. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Students : NSManagedObject

@property (nonatomic, retain) NSString * firstName;
@property (nonatomic, retain) NSString * lastName;
@property (nonatomic, retain) NSString * mailId;
@property (nonatomic, retain) NSString * phNum;
@property (nonatomic, retain) NSString * collName;
@property (nonatomic, retain) NSString * studentId;

@end
