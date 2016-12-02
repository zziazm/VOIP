//
//  VoipVideoSession.h
//  Sample_1
//
//  Created by r.hryvach on 1/17/12.
//  Copyright (c) 2012 Abto Software. All rights reserved.
//

#ifndef Sample_1_VoipVideoSession_h
#define Sample_1_VoipVideoSession_h

#import "VoipCallSession.h"

typedef enum {
    EVoipVideoSessionOrientationPortrait = 0,
    EVoipVideoSessionOrientationPortraitUpsideDown,
    EVoipVideoSessionOrientationLandscapeLeft,
    EVoipVideoSessionOrientationLandscapeRight
} VoipVideoSessionOrientation;

@interface VoipVideoSession:VoipCallSession

-(void)setPreview:(UIImageView*)videoViewCtrl;

-(void)setOrientation:(VoipVideoSessionOrientation)orientation;

@end

#endif
