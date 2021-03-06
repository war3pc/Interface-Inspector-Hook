//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDictionary, NSImage, NSString, SMInterface;
@protocol SMInterfaceComponentDelegate;

__attribute__((visibility("hidden")))
@interface SMInterfaceComponent : NSObject
{
    BOOL _ready;
    BOOL _root;
    unsigned long long _index;
    unsigned long long _instance;
    NSString *_className;
    NSString *_superclassNames;
    NSString *_bundlePath;
    NSArray *_types;
    NSArray *_categories;
    NSDictionary *_properties;
    NSArray *_components;
    SMInterface *_interface;
    id <SMInterfaceComponentDelegate> _delegate;
    NSData *_componentImageData;
    double _componentDisplayScale;
}

+ (id)keyPathsForValuesAffectingComponentCanHide;
+ (id)keyPathsForValuesAffectingComponentHidden;
+ (id)keyPathsForValuesAffectingComponentIcon;
+ (id)keyPathsForValuesAffectingComponentTitle;
+ (id)keyPathsForValuesAffectingComponentImage;
+ (id)keyPathsForValuesAffectingSecondItemTitle;
+ (id)keyPathsForValuesAffectingFirstItemTitle;
@property(nonatomic) double componentDisplayScale; // @synthesize componentDisplayScale=_componentDisplayScale;
@property(copy, nonatomic) NSData *componentImageData; // @synthesize componentImageData=_componentImageData;
@property(nonatomic) __weak id <SMInterfaceComponentDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak SMInterface *interface; // @synthesize interface=_interface;
@property(copy, nonatomic) NSArray *components; // @synthesize components=_components;
@property(copy, nonatomic) NSDictionary *properties; // @synthesize properties=_properties;
@property(copy, nonatomic) NSArray *categories; // @synthesize categories=_categories;
@property(copy, nonatomic) NSArray *types; // @synthesize types=_types;
@property(copy, nonatomic) NSString *bundlePath; // @synthesize bundlePath=_bundlePath;
@property(copy, nonatomic) NSString *superclassNames; // @synthesize superclassNames=_superclassNames;
@property(copy, nonatomic) NSString *className; // @synthesize className=_className;
@property(nonatomic) BOOL root; // @synthesize root=_root;
@property(nonatomic) BOOL ready; // @synthesize ready=_ready;
@property(nonatomic) unsigned long long instance; // @synthesize instance=_instance;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long componentStatus;
- (id)description;
@property(readonly, nonatomic) BOOL componentCanHide;
@property(nonatomic, getter=isComponentHidden) BOOL componentHidden;
@property(readonly, nonatomic) NSImage *componentIcon;
@property(readonly, nonatomic) NSString *componentTitle;
@property(readonly, nonatomic) NSImage *componentImage;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (id)init;
@property(readonly, copy, nonatomic) NSString *secondItemTitle;
@property(readonly, copy, nonatomic) NSString *firstItemTitle;

@end

