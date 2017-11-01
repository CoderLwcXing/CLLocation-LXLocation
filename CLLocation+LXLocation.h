//
//  CLLocation+LXLocation.h
//  CLLocation+LXLocation
//
//  Created by 丿Love_wcx丶灬丨 紫軒 on 2017/11/1.
//  Copyright © 2017年 丿Love_wcx丶灬丨若兮. All rights reserved.
//


#import <CoreLocation/CoreLocation.h>

@interface CLLocation (LXLocation)

/**
 从地图坐标转化到火星坐标

 @return CLLocation
 */
- (CLLocation *)lxLocationMarsFromEarth;

/**
 从火星坐标转化到百度坐标

 @return CLLocation
 */
- (CLLocation *)lxLocationBaiduFromMars;

/**
 从百度坐标到火星坐标

 @return CLLocation
 */
- (CLLocation *)lxLocationMarsFromBaidu;

@end
