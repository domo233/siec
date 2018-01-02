//
// Created by domino on 30.12.2017.
//

#include "../Headers/Storehouse.h"
#include "../Headers/PackageQueue.h"

Storehouse::Storehouse(ElementID _id)
{
    id = _id;
    depot = std::unique_ptr<IPackageDepot>(new PackageQueue(QueueType::LIFO));
}

void Storehouse::receivePackage(const Package & package)
{
    depot->push(package);
}




