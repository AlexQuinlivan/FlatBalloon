//
//  HLMViewController.h
//  Helium
//
//  Created by Alex Quinlivan on 13/03/15.
//
//

#import <UIKit/UIKit.h>
#import "HLMViewBinder.h"

@interface HLMViewController : UIViewController
@property (readonly) NSString* layoutResource;
@property (readonly) BOOL shouldAnimateKeyboardHeight; //Is this needed? Should it be readonly?
@end
