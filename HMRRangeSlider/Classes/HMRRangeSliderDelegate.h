//  HMRRangeSliderDelegate.h
//
//  Created by Romulo Monteiro on 09/08/2018.
//

#import <Foundation/Foundation.h>
@class HMRRangeSlider;

@protocol HMRRangeSliderDelegate <NSObject>

@optional

/**
 * Called when the RangeSlider values are changed
 */
- (void)rangeSlider: (HMRRangeSlider *)sender didChangeSelectedMinimumValue: (float)selectedMinimum andMaximumValue: (float)selectedMaximum;

/**
 * Called when the RangeSlider values will change
 */
- (void)rangeSlider: (HMRRangeSlider *)sender willChangeLeftHandle: (BOOL)leftSelected
      orRightHandle: (BOOL)rightSelected
            toValue: (float)value;

/**
 * Called when the user has finished interacting with the RangeSlider
 */
- (void)rangeSlider: (HMRRangeSlider *)sender didEndTouchesInLeftHandle: (BOOL)leftSelected
      orRightHandle: (BOOL)rightSelected;

/**
 * Called when the user has started interacting with the RangeSlider
 */
- (void)rangeSlider: (HMRRangeSlider *)sender didStartTouchesInLeftHandle: (BOOL)leftSelected
      orRightHandle: (BOOL)rightSelected;

@end
