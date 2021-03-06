//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSNetServiceDelegate-Protocol.h"

@class GCDAsyncSocket, NSNetService, NSString;
@protocol SMServiceDelegate;

__attribute__((visibility("hidden")))
@interface SMService : NSObject <NSNetServiceDelegate>
{
    BOOL _started;
    id <SMServiceDelegate> _delegate;
    NSNetService *_service;
    GCDAsyncSocket *_socket;
}

@property(retain, nonatomic) GCDAsyncSocket *socket; // @synthesize socket=_socket;
@property(retain, nonatomic) NSNetService *service; // @synthesize service=_service;
@property(nonatomic) id <SMServiceDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isStarted) BOOL started; // @synthesize started=_started;
- (void).cxx_destruct;
- (void)socketDidDisconnect:(id)arg1 withError:(id)arg2;
- (void)socket:(id)arg1 didAcceptNewSocket:(id)arg2;
- (void)netServiceDidStop:(id)arg1;
- (void)netService:(id)arg1 didNotPublish:(id)arg2;
- (void)netServiceDidPublish:(id)arg1;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

