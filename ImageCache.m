//
//  ImageCache.m
//  PhotoPuzzle
//
//  Created by Gustav Lindbergh on 2011-07-13.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import "ImageCache.h"


@implementation ImageCache

static ImageCache *sharedImageCache;

- (id) init
{
    [super init];
    dictionary = [[NSMutableDictionary alloc] init];
    return self;
}

#pragma mark Accessing the cache

- (void)setImage:(UIImage *)i forKey:(NSString *)s
{
    [dictionary setObject:i forKey:s];
}

- (UIImage *)imageForKey:(NSString *)s
{
    return [dictionary objectForKey:s];
}

- (void) deleteImageForKey:(NSString *)s
{
    [dictionary removeObjectForKey:s];
}

#pragma mark Singleton Stuff

+ (ImageCache *)sharedImageCache
{
    if (!sharedImageCache) {
        sharedImageCache = [[ImageCache alloc] init];
    }
    
    return sharedImageCache;
}

+ (id) allocWithZone:(NSZone *)zone
{
    if (!sharedImageCache) {
        sharedImageCache = [super allocWithZone:zone];
        return sharedImageCache;
    }
    else
    {
        return nil;
    }
}

- (id) copyWithZone:(NSZone *)zone
{
    return self;
}

- (void) release
{
    //No op
}

@end