/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSPortNameServer.h"


@interface NSMachBootstrapServer : NSPortNameServer {
}
+(id)sharedInstance;
-(id)portForName:(id)name;
-(BOOL)registerPort:(id)port name:(id)name;
-(id)servicePortWithName:(id)name;
-(id)portForName:(id)name host:(id)host;
-(BOOL)removePortForName:(id)name;
@end

