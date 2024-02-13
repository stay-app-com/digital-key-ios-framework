#import <Foundation/Foundation.h>
#import "DigitalKeyProviderOutputProtocol.h"
#import <Foundation/Foundation.h>
#import <WebKit/WKWebView.h>

@protocol DigitalKeyProviderInputProtocol;

@interface DigitalKeyModule : NSObject <DigitalKeyProviderOutputProtocol>

@property id<DigitalKeyProviderInputProtocol> dkProvider;
@property WKWebView *webview;
- (void)didReceiveMessage:(NSString *)message;
- (void)initializeItWithStayData:(NSDictionary *)stayDataJSON configuration:(NSDictionary *)configurationJSON;
- (void)startProcessWithCallback;
- (void)activateKeyWithIndex:(NSInteger)index;
- (void)deactivateKeyWithIndex:(NSInteger)index;
- (void)getKeysWithCallback;
- (void)setInvitationCode:(NSString *)code;
@end
