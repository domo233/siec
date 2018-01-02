//
// Created by domino on 29.12.2017.
//

#ifndef OOO_IPACKAGERECEIVER_H
#define OOO_IPACKAGERECEIVER_H

#include "aliases.h"

class IPackageReceiver
{
public:
    virtual void receivePackage(const Package&) = 0;
    virtual Package* viewDepot() = 0;
    virtual ReceiverType getReceiverType() = 0;
    virtual ElementID getId() = 0;
};


#endif //OOO_IPACKAGERECEIVER_H
