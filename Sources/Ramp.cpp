//
// Created by domino on 30.12.2017.
//

#include "../Headers/Ramp.h"

Ramp::Ramp(ElementID _id, TimeOffset time)
{
    id = _id;
    deliveryInterval = time;
}

void Ramp::deliverGoods(Time t)
{
    if(t % deliveryInterval == 0)
    {
        auto new_package = Package();
        pushToSendingBuffer(new_package);
    }
}