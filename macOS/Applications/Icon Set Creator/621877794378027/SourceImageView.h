//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSImageView.h"

@class NSString;

@interface SourceImageView : NSImageView
{
    NSString *_imageFilePath;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *imageFilePath; // @synthesize imageFilePath=_imageFilePath;
- (void)concludeDragOperation:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)mouseDown:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

