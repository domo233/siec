//
// Created by domino on 30.12.2017.
//

#ifndef OOO_PACKAGESENDER_H
#define OOO_PACKAGESENDER_H

#include "ReceiverPreferences.h"
#include <vector>

class PackageSender
{
    ReceiverPreferences receiverPreferences;
    std::vector<Package> sendingBuffer;
public:
    //PackageSender(ElementID);
    const ReceiverPreferences& getReceiverPreferences() const {return receiverPreferences;}
    void setReceiverPreferences(const ReceiverPreferences&);
    void sendPackage();
    const std::vector<Package>& getSendingBuffer() const {return sendingBuffer;}
    void pushToSendingBuffer(Package);
};

#endif //OOO_PACKAGESENDER_H
