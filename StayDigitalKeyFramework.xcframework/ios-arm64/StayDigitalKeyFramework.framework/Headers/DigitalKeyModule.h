#import <Foundation/Foundation.h>
#import "DigitalKeyProviderOutputProtocol.h"
#import <Foundation/Foundation.h>
#import <WebKit/WKWebView.h>

@protocol DigitalKeyProviderInputProtocol;

@interface DigitalKeyModule : NSObject <DigitalKeyProviderOutputProtocol>

@property id<DigitalKeyProviderInputProtocol> dkProvider;
@property WKWebView *webview;
- (void)didReceiveMessage:(NSString *)message;

@end
