//
//  VoipVideoSession.m
//  Sample_1
//
//  Created by user on 1/17/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import "VoipVideoSession.m"

@implementation VoipVideoSession

-(void)setPreview:(UIImageView*)videoViewCtrl
{
}

-(void)setOrientation:(VoipVideoSessionOrientation)orientation
{
    AbtoVideoSession* s;

    switch (orientation) {
        case EVoipVideoSessionOrientationPortrait:
            [s setOrientation:EAbtoVideoOrientationPortrait];
            break;
        case EVoipVideoSessionOrientationPortraitUpsideDown:
            [s setOrientation:EAbtoVideoOrientationPortraitUpsideDown];
            break;
        case EVoipVideoSessionOrientationLandscapeLeft:
            [s setOrientation:EAbtoVideoOrientationLandscapeLeft];
            break;
        case EVoipVideoSessionOrientationLandscapeRight:
            [s setOrientation:EAbtoVideoOrientationLandscapeRight];
            break;
        default:
            break;
    }
}

@end
