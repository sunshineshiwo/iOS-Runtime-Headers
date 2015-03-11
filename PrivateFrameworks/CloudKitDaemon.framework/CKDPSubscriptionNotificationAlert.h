/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSMutableArray, NSString;

@interface CKDPSubscriptionNotificationAlert : PBCodable <NSCopying> {
    NSString *_actionLocKey;
    NSString *_launchImage;
    NSMutableArray *_localizedArguments;
    NSString *_localizedKey;
    NSString *_soundName;
    NSString *_text;
}

@property(retain) NSString * actionLocKey;
@property(readonly) bool hasActionLocKey;
@property(readonly) bool hasLaunchImage;
@property(readonly) bool hasLocalizedKey;
@property(readonly) bool hasSoundName;
@property(readonly) bool hasText;
@property(retain) NSString * launchImage;
@property(retain) NSMutableArray * localizedArguments;
@property(retain) NSString * localizedKey;
@property(retain) NSString * soundName;
@property(retain) NSString * text;

- (void).cxx_destruct;
- (id)actionLocKey;
- (void)addLocalizedArguments:(id)arg1;
- (void)clearLocalizedArguments;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasActionLocKey;
- (bool)hasLaunchImage;
- (bool)hasLocalizedKey;
- (bool)hasSoundName;
- (bool)hasText;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)launchImage;
- (id)localizedArguments;
- (id)localizedArgumentsAtIndex:(unsigned long long)arg1;
- (unsigned long long)localizedArgumentsCount;
- (id)localizedKey;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setActionLocKey:(id)arg1;
- (void)setLaunchImage:(id)arg1;
- (void)setLocalizedArguments:(id)arg1;
- (void)setLocalizedKey:(id)arg1;
- (void)setSoundName:(id)arg1;
- (void)setText:(id)arg1;
- (id)soundName;
- (id)text;
- (void)writeTo:(id)arg1;

@end