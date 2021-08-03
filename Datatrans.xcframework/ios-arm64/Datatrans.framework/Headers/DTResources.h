//
//  DTResources.h
//  datatrans-iphone
//
//  Created by Kaspar Rohrer on 09.09.10.
//  Copyright 2010 iEffects. All rights reserved.
//

#import <Foundation/Foundation.h>

#define DTLocalizedString(key) \
	[DTResources localizedStringForKey:(key)]

@interface DTResources : NSObject {

}

+ (nonnull NSBundle *)bundle;

+ (nonnull NSBundle *)languageBundle;
+ (void)selectLanguageBundleForLanguage:(nullable NSString *)language;

+ (nonnull NSString *)localizedStringForKey:(nonnull NSString *)key;

+ (nonnull UIImageView *)viewForIcon:(nonnull UIImage *)icon withColor:(nullable UIColor *)color;

+ (nullable UIImage *)imageFromPDFNamed:(nonnull NSString *)pdfName forPointSize:(CGSize)size;

@end
