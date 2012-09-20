/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray;

@interface UIInputSwitcherShadowView : UIView  {
    int m_mode;
    float m_pointerOffset;
    NSArray *m_gradientColors;
}

@property int mode;
@property float pointerOffset;
@property(retain) NSArray * gradientColors;


- (void)dealloc;
- (void)setGradientColors:(id)arg1;
- (void)setPointerOffset:(float)arg1;
- (float)pointerOffset;
- (id)gradientColors;
- (int)mode;
- (void)setMode:(int)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end