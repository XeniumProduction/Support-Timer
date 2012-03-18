//
//  ViewController.h
//  League of Legend - Support Timer
//
//  Created by Lion User on 18/03/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <GLKit/GLKit.h>
#import <AVFoundation/AVFoundation.h>
#import <AudioToolbox/AudioToolbox.h>

@interface ViewController : GLKViewController <AVAudioPlayerDelegate>
{
    AVAudioPlayer * audioPlayer;
}

@end
