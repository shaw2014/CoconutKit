//
//  Copyright (c) Samuel Défago. All rights reserved.
//
//  Licence information is available from the LICENCE file.
//

#import "HLSPreviewItem.h"

@interface HLSPreviewItem ()

@property (nonatomic, strong) NSURL *previewItemURL;
@property (nonatomic, strong) NSString *previewItemTitle;

@end

@implementation HLSPreviewItem

#pragma mark Object creation and destruction

- (instancetype)initWithPreviewItemURL:(NSURL *)previewItemURL previewItemTitle:(NSString *)previewItemTitle
{
    if (self = [super init]) {
        self.previewItemURL = previewItemURL;
        self.previewItemTitle = previewItemTitle;
    }
    return self;
}

- (instancetype)initWithPreviewItemURL:(NSURL *)previewItemURL
{
    return [self initWithPreviewItemURL:previewItemURL previewItemTitle:nil];
}

@end
