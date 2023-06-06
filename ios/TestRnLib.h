
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestRnLibSpec.h"

@interface TestRnLib : NSObject <NativeTestRnLibSpec>
#else
#import <React/RCTBridgeModule.h>

@interface TestRnLib : NSObject <RCTBridgeModule>
#endif

@end
