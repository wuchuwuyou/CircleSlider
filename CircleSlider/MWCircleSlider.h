//
//  MWCircleSlider.h
//  CircleSlider
//
//  Created by Murphy on 16/1/2.
//
//

#import <UIKit/UIKit.h>

IB_DESIGNABLE
@interface MWCircleSlider : UIControl
/*
 The value in degrees
 The angle from circular slider will starts
 Default value is -90
 */
@property (nonatomic) IBInspectable CGFloat startAngle;

/*
 The value in degrees
 The angle between start end finish positions
 Default value is 90
 */
@property (nonatomic) IBInspectable CGFloat cutoutAngle;

@property (nonatomic) IBInspectable CGFloat progress;
@property (nonatomic) IBInspectable CGFloat lineWidth;

@property (nonatomic, strong) IBInspectable UIColor *guideLineColor;

@property (nonatomic) IBInspectable CGFloat handleOutSideRadius;
@property (nonatomic) IBInspectable CGFloat handleInSideRadius;

@end
