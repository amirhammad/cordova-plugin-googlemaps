//
//  MyPlgunProtocol.h
//  cordova-googlemaps-plugin v2
//
//  Created by masashi.
//
//

#import <Foundation/Foundation.h>
#import <Cordova/CDV.h>

@protocol MyPlgunProtocol <NSObject>
@property (nonatomic, strong) NSMutableDictionary* objects;
- (void)onHookedPluginResult:(CDVPluginResult*)result callbackId:(NSString*)callbackId;
- (void)pluginUnload;
@end
