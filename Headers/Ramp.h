//
// Created by domino on 30.12.2017.
//

#ifndef OOO_RAMP_H
#define OOO_RAMP_H

#include "PackageSender.h"

class Ramp : PackageSender
{
    ElementID id;
    TimeOffset deliveryInterval;
public:
    Ramp(ElementID, TimeOffset);
    void deliverGoods(Time);
    TimeOffset getDeliveryInterval() {return deliveryInterval;}
    ElementID getId() {return id;}
};

#endif //OOO_RAMP_H
