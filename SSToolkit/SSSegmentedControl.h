//
//  SSSegmentedControl.h
//  SSToolkit
//
//  Created by Sam Soffes on 2/7/11.
//  Copyright 2011 Sam Soffes. All rights reserved.
//

// Limitiations:
// - Removing and inserting items is not supported
// - Setting item width is not supported
// - Setting item content offset is not supported

enum {
	SSSegmentedControlNoSegment = UISegmentedControlNoSegment
};

@interface SSSegmentedControl : UIControl

@property (nonatomic, assign, readonly) NSUInteger numberOfSegments;
@property (nonatomic, assign) NSInteger selectedSegmentIndex;
@property (nonatomic, getter=isMomentary) BOOL momentary;

@property (nonatomic, strong) UIImage *buttonImage;
@property (nonatomic, strong) UIImage *highlightedButtonImage;
@property (nonatomic, strong) UIImage *dividerImage;
@property (nonatomic, strong) UIImage *highlightedDividerImage;

@property (nonatomic, strong) UIFont *font;
@property (nonatomic, strong) UIColor *textColor;
@property (nonatomic, strong) UIColor *disabledTextColor;
@property (nonatomic, strong) UIColor *textShadowColor;
@property (nonatomic, assign) CGSize textShadowOffset;
@property (nonatomic, assign) UIEdgeInsets textEdgeInsets;

- (id)initWithItems:(NSArray *)items;

//- (void)insertSegmentWithTitle:(NSString *)title atIndex:(NSUInteger)segment animated:(BOOL)animated;
//- (void)insertSegmentWithImage:(UIImage *)image  atIndex:(NSUInteger)segment animated:(BOOL)animated;
//- (void)removeSegmentAtIndex:(NSUInteger)segment animated:(BOOL)animated;
//- (void)removeAllSegments;

- (void)setTitle:(NSString *)title forSegmentAtIndex:(NSUInteger)segment;
- (NSString *)titleForSegmentAtIndex:(NSUInteger)segment;

- (void)setImage:(UIImage *)image forSegmentAtIndex:(NSUInteger)segment;
- (UIImage *)imageForSegmentAtIndex:(NSUInteger)segment;

//- (void)setWidth:(CGFloat)width forSegmentAtIndex:(NSUInteger)segment;
//- (CGFloat)widthForSegmentAtIndex:(NSUInteger)segment;

//- (void)setContentOffset:(CGSize)offset forSegmentAtIndex:(NSUInteger)segment;
//- (CGSize)contentOffsetForSegmentAtIndex:(NSUInteger)segment;

- (void)setEnabled:(BOOL)enabled forSegmentAtIndex:(NSUInteger)segment;
- (BOOL)isEnabledForSegmentAtIndex:(NSUInteger)segment;

@end
