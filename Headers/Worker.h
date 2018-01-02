//
// Created by domino on 30.12.2017.
//

#ifndef OOO_WORKER_H
#define OOO_WORKER_H

#include "PackageSender.h"
#include "IPackageReceiver.h"
#include "IPackageQueue.h"
#include <memory>

class Worker : public PackageSender, public IPackageReceiver
{
    ElementID id;
    TimeOffset processingDuration;
    Time packageProcessingStartTime;
    std::unique_ptr<IPackageQueue> queue;
public:
    Worker(ElementID, TimeOffset, QueueType);
    void receivePackage(const Package&) override;
    //viewDepot()
    void doWork();
    TimeOffset getProcessingDuration() {return processingDuration;}
    Time getPackageProcessingStartTime() {return packageProcessingStartTime;}
    ReceiverType getReceiverType() {return ReceiverType::WORKER;}
    ElementID getId() {return id;}
};

#endif //OOO_WORKER_H
