//
//  SPFilePreferencePane.m
//  sequel-pro
//
//  Created by Stuart Connolly (stuconnolly.com) on October 31, 2010.
//  Copyright (c) 2010 Stuart Connolly. All rights reserved.
//
//  Permission is hereby granted, free of charge, to any person
//  obtaining a copy of this software and associated documentation
//  files (the "Software"), to deal in the Software without
//  restriction, including without limitation the rights to use,
//  copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the
//  Software is furnished to do so, subject to the following
//  conditions:
//
//  The above copyright notice and this permission notice shall be
//  included in all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
//  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
//  OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
//  NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
//  HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
//  WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
//  FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
//  OTHER DEALINGS IN THE SOFTWARE.
//
//  More info at <https://github.com/sequelpro/sequelpro>

#import "SPPreferencePane.h"
#import "SPPanelOptions.h"

/**
 * @class SPNetworkPreferencePane SPNetworkPreferencePane.h
 *
 * File preference pane controller.
 */
@interface SPFilePreferencePane : SPPreferencePane <SPPreferencePaneProtocol, NSTableViewDataSource, NSTableViewDelegate>
{
	IBOutlet NSTableView *fileView;
	IBOutlet NSView *hiddenFileView;

@private
	NSOpenPanel *_currentFilePanel;
    NSMutableArray<NSString *> *fileNames;

}

@property (weak) IBOutlet NSTextField *staleLabel;
@property (weak) IBOutlet NSButtonCell *revokeButton;

- (IBAction)revokeBookmark:(id)sender;
- (IBAction)addBookmark:(id)sender;
- (IBAction)doubleClick:(id)sender;
@end
