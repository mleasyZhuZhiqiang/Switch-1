//
//  NNPreferencesWindowController.h
//  Switch
//
//  Created by Scott Perry on 10/10/13.
//  Copyright (c) 2013 Scott Perry. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface NNPreferencesWindowController : NSWindowController

@property (weak) IBOutlet NSTextFieldCell *currentVersionCell;

- (IBAction)autoLaunchChanged:(NSButton *)sender;
- (IBAction)autoUpdatesChanged:(NSButton *)sender;
- (IBAction)checkForUpdatesPressed:(NSButton *)sender;
- (IBAction)preReleaseUpdatesChanged:(NSButton *)sender;
- (IBAction)changelogPressed:(NSButton *)sender;
- (IBAction)quitPressed:(NSButton *)sender;

@end