//
// Created by domino on 30.12.2017.
//

#ifndef OOO_IPACKAGEQUEUE_H
#define OOO_IPACKAGEQUEUE_H

#include "IPackageDepot.h"

class IPackageQueue : public IPackageDepot
{
public:
    virtual Package pop() = 0;
    virtual QueueType getQueueType() = 0;
};

#endif //OOO_IPACKAGEQUEUE_H
