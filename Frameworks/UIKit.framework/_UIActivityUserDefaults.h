/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, NSUserDefaults;

@interface _UIActivityUserDefaults : NSObject {
    NSString *_identifier;
    NSUserDefaults *_userDefaults;
}

@property(copy) NSString * identifier;
@property(retain) NSUserDefaults * userDefaults;

- (bool)activityIsHidden:(id)arg1;
- (id)applicationExtensionForActivity:(id)arg1;
- (bool)canHideActivity:(id)arg1;
- (void)dealloc;
- (id)defaultsValueForKey:(id)arg1 activity:(id)arg2;
- (id)identifier;
- (id)identifierForActivity:(id)arg1;
- (id)initWithIdentifier:(id)arg1 userDefaults:(id)arg2;
- (id)mergeArray:(id)arg1 withObjectsFromArray:(id)arg2;
- (void)postActivityUserDefaultsNotification;
- (void)setActivity:(id)arg1 asHidden:(bool)arg2;
- (void)setDefaultsValue:(id)arg1 forKey:(id)arg2 activity:(id)arg3;
- (void)setIdentifier:(id)arg1;
- (void)setUserDefaults:(id)arg1;
- (void)updateUserOrderForActivitiesInArray:(id)arg1;
- (id)userDefaults;
- (id)userOrderedActivitesFromActivitiesInArray:(id)arg1;

@end