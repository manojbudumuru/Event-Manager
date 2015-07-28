//
//  College.h
//  iosAppXaem
//
//  Created by Student on 12/1/14.
//  Copyright (c) 2014 Student. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface College : NSManagedObject

@property (nonatomic, retain) NSString * collegeName;
@property (nonatomic, retain) NSString * eventName;
@property (nonatomic, retain) NSString * eventDate;
@property (nonatomic, retain) NSString * eventDescription;

@end
