//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import "NSWindowDelegate-Protocol.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface SMWaitingWindowController : NSWindowController <NSWindowDelegate>
{
    BOOL _orderedIn;
    BOOL _cancelled;
    NSString *_label;
    NSString *_buttonLabel;
    CDUnknownBlockType _cancelBlock;
}

@property(nonatomic) BOOL cancelled; // @synthesize cancelled=_cancelled;
@property(nonatomic) BOOL orderedIn; // @synthesize orderedIn=_orderedIn;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(copy, nonatomic) NSString *buttonLabel; // @synthesize buttonLabel=_buttonLabel;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (void)cancel;
- (void)showSheetModalForWindow:(id)arg1 label:(id)arg2 buttonLabel:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)cancel:(id)arg1;
- (void)windowDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

