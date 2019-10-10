//
//  Mqtt.h
//  RCTMqtt
//
//  Created by Tuan PM on 2/14/16.
//  Copyright © 2016 Tuan PM. All rights reserved.
//
#import <Foundation/Foundation.h>
#import <React/RCTEventEmitter.h>

#import <MQTTClient/MQTTClient.h>
#import <MQTTClient/MQTTSessionManager.h>
#import <MQTTClient/MQTTSSLSecurityPolicy.h>



@interface Mqtt : NSObject <MQTTSessionManagerDelegate>

- (Mqtt*) initWithEmitter:(RCTEventEmitter *) emitter
                  options:(NSDictionary *) options
                clientRef:(NSString *) clientRef;
- (void) connect;
- (void) disconnect;
- (void) subscribe:(NSString *)topic qos:(NSNumber *)qos;
- (void) unsubscribe:(NSString *)topic;
- (void) publish:(NSString *) topic data:(NSData *)data qos:(NSNumber *)qos retain:(BOOL) retain;
@end
