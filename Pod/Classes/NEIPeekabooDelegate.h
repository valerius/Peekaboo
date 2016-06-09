
#import <Foundation/Foundation.h>

@protocol NEIPeekabooDelegate <NSObject>
@optional
    -(BOOL)peekabooViewportIsMaximized;
    -(BOOL)peekabooShouldAlterViewport:(id)scrollView maximized: (BOOL) maximized;
    -(void)peekabooWillAlterViewport:(id)scrollView maximized: (BOOL) maximized;
    -(void)peekabooDidAlterViewport:(id)scrollView maximized: (BOOL) maximized;
@end



@interface NEIPeekabooScrollViewDelegateProxy : NSObject <UIScrollViewDelegate>

@property (nonatomic, readonly)  id <UIScrollViewDelegate> primary;
@property (nonatomic,readonly)  id <UIScrollViewDelegate> secondary;

- (id) initWithPrimaryDelegate: (id <UIScrollViewDelegate>) primaryDelegate secondary: (id <UIScrollViewDelegate>) secondaryDelegate;
+ (id) proxyWithPrimaryDelegate: (id <UIScrollViewDelegate>) primary secondary: (id <UIScrollViewDelegate>) secondary;

@end