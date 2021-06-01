#import <Foundation/Foundation.h>
#import "DigitalKeyProviderOutputProtocol.h"
#import <Foundation/Foundation.h>
#import <WebKit/WKWebView.h>

@protocol DigitalKeyProviderInputProtocol;

@interface DigitalKeyModule : NSObject <DigitalKeyProviderOutputProtocol>

@property id<DigitalKeyProviderInputProtocol> dkProvider;
@property WKWebView *webview;
- (void)initializeItWithStayData:(NSDictionary *)stayData configuration:(NSDictionary *)configuration;
- (void)startProcessWithCallback;
- (void)getKeysWithCallback;
- (void)setInvitationCode:(NSString *)code;
- (void)activateKeyWithIndex:(NSInteger)indexKey;
- (void)deactivateKeyWithIndex:(NSInteger)indexKey;

@end
