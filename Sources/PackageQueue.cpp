//
// Created by domino on 30.12.2017.
//

#include "../Headers/PackageQueue.h"

PackageQueue::PackageQueue(QueueType queueType)
{
    _queueType = queueType;
}

void PackageQueue::push(Package package)
{
    _dequeue.push_front(package);
}

bool PackageQueue::empty()
{
    return _dequeue.empty();
}

int PackageQueue::size()
{
    return _dequeue.size();
}

Package PackageQueue::pop()
{
    if(_queueType == QueueType::FIFO)
    {
        Package temp = _dequeue.back();
        _dequeue.pop_back();
        return temp;
    }
    else
    {
        Package temp = _dequeue.front();
        _dequeue.pop_front();
        return temp;
    }
}

