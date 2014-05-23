//
//  DataProcessor.h
//  OpenData
//
//  Created by Michael Walker on 5/14/14.
//  Copyright (c) 2014 Lazer-Walker. All rights reserved.
//

extern NSString * const DataProcessorDidFinishProcessingNotification;

typedef void (^DataProcessorCompletionBlock)(NSArray *allObjects, NSArray *stops, NSArray *paths, NSArray *untrackedPeriods);

@interface DataProcessor : NSObject

+ (instancetype)sharedInstance;

- (void)fetchDataForDaysAgo:(NSInteger)daysAgo completion:(DataProcessorCompletionBlock)completion;
- (void)processNewData;
- (void)reprocessDataWithCompletion:(DataProcessorCompletionBlock)completion;
- (void)fetchStaleDataWithCompletion:(DataProcessorCompletionBlock)completion;

@end
