#import <Cocoa/Cocoa.h>
#import "Message.h"

@interface MessageViewController : NSObject {

}

- (void) highlight;
- (void) unhighlight;
- (NSView*) view;
- (Message*) message;
- (float) requiredHeight;
- (NSDate*) timestamp;

@end
