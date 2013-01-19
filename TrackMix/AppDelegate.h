//
//  AppDelegate.h
//  TrackMix
//
//  Created by Kostyantyn on 1/18/13.
//  Copyright (c) 2013 Kostyantyn. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@class Track;

@interface AppDelegate : NSObject <NSApplicationDelegate>

# pragma mark - Properties
@property (assign) IBOutlet NSWindow *window;
@property (weak)   IBOutlet NSTextField *textField;
@property (weak)   IBOutlet NSSlider *slider;
@property (strong) Track *track;

# pragma mark - Actions
- (IBAction)mute:(id)sender;
- (IBAction)takeFloatValueForVolumeFrom:(id)sender;

# pragma mark - Methods
- (void)updateUserInterface;

@end
