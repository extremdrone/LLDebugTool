//
//  LLScreenshotHelper.h
//
//  Copyright (c) 2018 LLDebugTool Software Foundation (https://github.com/HDB-Li/LLDebugTool)
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in all
//  copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
//  SOFTWARE.

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface LLScreenshotHelper : NSObject

/**
 Singleton to control screenshot.
 
 @return Singleton
 */
+ (instancetype _Nonnull)sharedHelper;

/**
 Set enable to screenshot.
 */
@property (nonatomic , assign , getter=isEnabled) BOOL enable;

/**
 Simulate user screenshot.
 */
- (void)simulateTakeScreenshot;

/**
 Return a image from current screen.
 */
- (UIImage *_Nullable)imageFromScreen;

/**
 Save screenShots to sandbox. Operation in child thread and callback in main thread.
 */
- (void)saveScreenshot:(UIImage *_Nonnull)image name:(NSString *_Nullable)name complete:(void (^ __nullable)(BOOL finished))complete;

@end
