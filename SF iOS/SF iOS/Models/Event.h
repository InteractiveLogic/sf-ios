//
//  Event.h
//  SF iOS
//
//  Created by Amit Jain on 7/29/17.
//  Copyright © 2017 Amit Jain. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EventType.h"
#import "Location.h"
@import UIKit;

NS_ASSUME_NONNULL_BEGIN
@interface Event : NSObject

@property (class, nonatomic, readonly) NSString *recordName;
@property (nonatomic, assign) EventType type;
@property (nonatomic) NSDate* date;
@property (nonatomic, assign) NSTimeInterval duration;
@property (nonatomic) Location* location;
@property (nonatomic, readonly) UIImage *annotationImage;

- (instancetype)initWithEventType:(EventType)type date:(NSDate *)date duration:(NSTimeInterval)duration location:(Location *)location;
- (instancetype)initWithRecord:(CKRecord *)record location:(Location *)location;

@end
NS_ASSUME_NONNULL_END
