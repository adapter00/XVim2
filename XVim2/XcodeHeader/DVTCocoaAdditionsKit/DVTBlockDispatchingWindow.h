//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:42:15).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSWindow.h>

@class NSMutableDictionary;

@interface DVTBlockDispatchingWindow : NSWindow
{
    NSMutableDictionary *_blocks;
    long long _nextBlockID;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)scheduleBlock:(CDUnknownBlockType)arg1;
- (void)sendEvent:(id)arg1;

@end

