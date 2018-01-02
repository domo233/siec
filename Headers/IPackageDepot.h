//
// Created by domino on 30.12.2017.
//

#ifndef OOO_IPACKAGEDEPOT_H
#define OOO_IPACKAGEDEPOT_H

#include "aliases.h"

class IPackageDepot
{
public:
    virtual void push(Package) = 0;
    virtual bool empty() = 0;
    virtual int size() = 0;
    //virtual std::vector<Package> view() = 0;
};

#endif //OOO_IPACKAGEDEPOT_H
