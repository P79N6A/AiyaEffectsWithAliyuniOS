//
//  AliyunMosaicFilter.h
//  qusdk
//
//  Created by Worthy on 2017/11/14.
//  Copyright © 2017年 Alibaba Group Holding Limited. All rights reserved.
//

#import <Foundation/Foundation.h>

#import <OpenGLES/EAGL.h>
#import <OpenGLES/ES2/gl.h>
#import <OpenGLES/ES2/glext.h>
#import <UIKit/UIKit.h>
@interface AliyunMosaicFilter : NSObject
@property (nonatomic, assign) NSInteger radius;
@property (nonatomic, assign) CGSize textureSize;
- (instancetype)initWithTextureSize:(CGSize)textureSize;
- (int)renderWithTexture:(NSInteger)textureName textureSize:(CGSize)textureSize;

@end

