//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppStoreDaemon/ASDRequestOptions.h>

@class NSString;

@interface ASDPostPurchaseIntentBulletinRequestOptions : ASDRequestOptions
{
    NSString *_appBundleId;
    NSString *_appName;
    NSString *_iapName;
}

@property(copy, nonatomic) NSString *iapName; // @synthesize iapName=_iapName;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(copy, nonatomic) NSString *appBundleId; // @synthesize appBundleId=_appBundleId;
- (void).cxx_destruct;
- (id)init;

@end
