//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/_TtP6IDEKit15IDESelectedItem_-Protocol.h>

@class DVTFileDataType, IDENavigableItemArchivableRepresentation, NSURL;

@interface IDENavigableItemSelectedItem : NSObject <_TtP6IDEKit15IDESelectedItem_>
{
    IDENavigableItemArchivableRepresentation *_archivableRepresentation;
}

@property(readonly, nonatomic) IDENavigableItemArchivableRepresentation *archivableRepresentation; // @synthesize archivableRepresentation=_archivableRepresentation;
- (void).cxx_destruct;
- (void)navigableItemForTemporaryCompatibilityInWorkspace:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)editorOpenSpecifierWithDocumentExtensionIdentifier:(id)arg1 error:(id *)arg2;
- (id)editorOpenSpecifierWithError:(id *)arg1;
- (BOOL)hasGreatestDocumentAncestorInWorkspace:(id)arg1;
@property(readonly, nonatomic) DVTFileDataType *contextualDocumentType;
@property(readonly, copy, nonatomic) NSURL *documentURL;
- (id)representedObjectInWorkspace:(id)arg1;
- (id)initWithArchivableRepresentation:(id)arg1;
- (id)description;

@end

