//
// Created by domino on 30.12.2017.
//

#ifndef OOO_STOREHOUSE_H
#define OOO_STOREHOUSE_H

#include "IPackageReceiver.h"
#include "IPackageDepot.h"
#include <memory>

class Storehouse : IPackageReceiver
{
    ElementID id;
    std::unique_ptr<IPackageDepot> depot;
public:
    explicit Storehouse(ElementID);
    void receivePackage(const Package&) override;
    //Package* viewDepot() override;
    ReceiverType getReceiverType() override {return ReceiverType::STOREHOUSE;}
    ElementID getId() override {return id;}

};

#endif //OOO_STOREHOUSE_H
