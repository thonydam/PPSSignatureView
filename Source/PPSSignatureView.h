#import <UIKit/UIKit.h>
#import <GLKit/GLKit.h>

@protocol SignatureViewDelegate;

@interface PPSSignatureView : GLKView

@property (nonatomic, weak) NSObject <SignatureViewDelegate> *signaturedelegate;
@property (assign, nonatomic) UIColor *strokeColor;
@property (assign, nonatomic) BOOL hasSignature;
@property (strong, nonatomic) UIImage *signatureImage;

- (void)erase;

@end


@protocol SignatureViewDelegate

- (void)signatureBegin;

@end
