
//
//  RainbowView.h
//  Rainbow
//
//  Created by Dmitry Soldatenkov on 8/26/10.
//  Copyright 2010 __Rhomobile__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface RainbowSmallViewManager : NSObject {

}

+ (RainbowSmallViewManager*)getInstance;

- (void)openView;
- (void)closeView;




@end

