//
//  main.m
//  Sample_1
//
//  Created by a.derenko on 12/9/11.
//  Copyright (c) 2011 ABTO Software. All rights reserved.
//

#import <UIKit/UIKit.h>

#ifdef __llvm__
#define AUTORELEASE_POOL_BEGIN @autoreleasepool{
#define AUTORELEASE_POOL_END }
#elif ((__GNUC__==4) && (__GNUC_MINOR__ == 2))
#define AUTORELEASE_POOL_BEGIN
#define AUTORELEASE_POOL_END
#else
#define AUTORELEASE_POOL_BEGIN NSAutoreleasePool *pool = [[NSAutoreleasePool alloc] init];
#define AUTORELEASE_POOL_END [pool drain];
#endif

int main(int argc, char *argv[])
{
    AUTORELEASE_POOL_BEGIN
        return UIApplicationMain(argc, argv, nil, NSStringFromClass([abtoAppDelegate class]));
    AUTORELEASE_POOL_END
}
