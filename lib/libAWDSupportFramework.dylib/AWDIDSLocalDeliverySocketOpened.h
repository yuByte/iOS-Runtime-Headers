/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@class NSString;

@interface AWDIDSLocalDeliverySocketOpened : PBCodable <NSCopying> {
    struct { 
        unsigned int isToDefaultPairedDevice : 1; 
        unsigned int openError : 1; 
        unsigned int priority : 1; 
        unsigned int socketError : 1; 
        unsigned int timestamp : 1; 
    NSString *_guid;
    } _has;
    unsigned long long _isToDefaultPairedDevice;
    unsigned long long _openError;
    unsigned long long _priority;
    NSString *_service;
    unsigned long long _socketError;
    NSString *_streamName;
    unsigned long long _timestamp;
}

@property(retain) NSString * guid;
@property(readonly) BOOL hasGuid;
@property BOOL hasIsToDefaultPairedDevice;
@property BOOL hasOpenError;
@property BOOL hasPriority;
@property(readonly) BOOL hasService;
@property BOOL hasSocketError;
@property(readonly) BOOL hasStreamName;
@property BOOL hasTimestamp;
@property unsigned long long isToDefaultPairedDevice;
@property unsigned long long openError;
@property unsigned long long priority;
@property(retain) NSString * service;
@property unsigned long long socketError;
@property(retain) NSString * streamName;
@property unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)guid;
- (BOOL)hasGuid;
- (BOOL)hasIsToDefaultPairedDevice;
- (BOOL)hasOpenError;
- (BOOL)hasPriority;
- (BOOL)hasService;
- (BOOL)hasSocketError;
- (BOOL)hasStreamName;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)isToDefaultPairedDevice;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)openError;
- (unsigned long long)priority;
- (BOOL)readFrom:(id)arg1;
- (id)service;
- (void)setGuid:(id)arg1;
- (void)setHasIsToDefaultPairedDevice:(BOOL)arg1;
- (void)setHasOpenError:(BOOL)arg1;
- (void)setHasPriority:(BOOL)arg1;
- (void)setHasSocketError:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setIsToDefaultPairedDevice:(unsigned long long)arg1;
- (void)setOpenError:(unsigned long long)arg1;
- (void)setPriority:(unsigned long long)arg1;
- (void)setService:(id)arg1;
- (void)setSocketError:(unsigned long long)arg1;
- (void)setStreamName:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)socketError;
- (id)streamName;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
