//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Intents/INReservation.h>

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class INSeat, INTicketedEvent;

@interface INTicketedEventReservation : INReservation <NSCopying, NSSecureCoding>
{
    INTicketedEvent *_event;
    INSeat *_reservedSeat;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy) INSeat *reservedSeat; // @synthesize reservedSeat=_reservedSeat;
@property(readonly, copy) INTicketedEvent *event; // @synthesize event=_event;
- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithItemReference:(id)arg1 reservationNumber:(id)arg2 bookingTime:(id)arg3 reservationStatus:(long long)arg4 reservationHolderName:(id)arg5 actions:(id)arg6 reservedSeat:(id)arg7 event:(id)arg8;

@end

