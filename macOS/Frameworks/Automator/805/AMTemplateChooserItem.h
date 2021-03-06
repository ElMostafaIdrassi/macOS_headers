//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AMWorkflowMetaData, AMWorkflowPersonality, NSImage, NSString;

@interface AMTemplateChooserItem : NSObject
{
    AMWorkflowPersonality *_workflowPersonality;
    AMWorkflowMetaData *_workflowMetaData;
    NSImage *_imageRepresentation;
    NSString *_imageTitle;
    double _imageDimensino;
    struct CGSize _imageInset;
    NSString *_templateDescription;
}

+ (id)templateChooserItems;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *templateDescription; // @synthesize templateDescription=_templateDescription;
@property(nonatomic) struct CGSize imageInset; // @synthesize imageInset=_imageInset;
@property(nonatomic) double imageDimension; // @synthesize imageDimension=_imageDimensino;
@property(copy, nonatomic) NSString *imageTitle; // @synthesize imageTitle=_imageTitle;
@property(retain) AMWorkflowMetaData *workflowMetaData; // @synthesize workflowMetaData=_workflowMetaData;
@property __weak AMWorkflowPersonality *workflowPersonality; // @synthesize workflowPersonality=_workflowPersonality;
@property(retain, nonatomic) NSImage *imageRepresentation; // @synthesize imageRepresentation=_imageRepresentation;
@property(readonly, nonatomic) BOOL isSelectable;
- (void)configureWithSettingsDictionary:(id)arg1;
- (id)description;
- (id)initWithWorkflowPersonality:(id)arg1 workflowMetaData:(id)arg2;
- (id)initWithWorkflowPersonality:(id)arg1;

@end

