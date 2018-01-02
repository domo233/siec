//
// Created by domino on 30.12.2017.
//

#include "../Headers/Worker.h"
#include "../Headers/PackageQueue.h"

Worker::Worker(ElementID _id, TimeOffset _time, QueueType type)
{
    id = _id;
    processingDuration = _time;
    packageProcessingStartTime = 0;
    queue = std::unique_ptr<IPackageQueue>(new PackageQueue(type));
}

void Worker::receivePackage(const Package & package)
{
    queue->push(package);
}

void Worker::doWork()
{
    if(!queue->empty())
    {
        if(packageProcessingStartTime != processingDuration)
        {
            packageProcessingStartTime++;
        }
        else
        {
            pushToSendingBuffer(queue->pop());
            packageProcessingStartTime = 0;
        }
    }
}




