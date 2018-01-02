//
// Created by domino on 30.12.2017.
//

#ifndef OOO_PACKAGEQUEUE_H
#define OOO_PACKAGEQUEUE_H

#include "IPackageQueue.h"
#include <deque>
#include <vector>

class PackageQueue : public IPackageQueue
{
    QueueType _queueType;
    std::deque<Package> _dequeue;
public:
    explicit PackageQueue(QueueType);
    void push(Package) override;
    bool empty() override;
    int size() override;
    //std::vector<Package> view() override;
    Package pop() override;
    QueueType getQueueType() override {return _queueType;};

};

#endif //OOO_PACKAGEQUEUE_H
