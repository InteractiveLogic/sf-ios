//
//  EventDataSOurce.h
//  SF iOS
//
//  Created by Amit Jain on 7/29/17.
//  Copyright © 2017 Amit Jain. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Event.h"
#import "FeedProvider.h"
#import "FeedProviderDelegate.h"

NS_ASSUME_NONNULL_BEGIN
@class EventDataSource;

@interface EventDataSource : NSObject <FeedProvider>

@property (nonatomic, weak) id<FeedProviderDelegate> delegate;
@property (nonatomic, readonly, assign) NSUInteger numberOfEvents;

/// Index of the next upcoming event. If not found, returns NSNotFound
@property (nonatomic, readonly, assign) NSUInteger indexOfCurrentEvent;

- (instancetype)initWithEventType:(EventType)eventType;
- (Event *)eventAtIndex:(NSUInteger)index;

@end
NS_ASSUME_NONNULL_END
