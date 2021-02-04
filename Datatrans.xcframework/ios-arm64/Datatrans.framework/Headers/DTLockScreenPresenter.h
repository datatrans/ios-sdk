
@protocol DTLockScreenPresenter <NSObject>

- (void)showLockScreenWithText:(nonnull NSString *)text;
- (void)dismissLockScreen;

@end
