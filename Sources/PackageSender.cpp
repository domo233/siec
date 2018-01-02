//
// Created by domino on 30.12.2017.
//

#include "../Headers/PackageSender.h"
#include <ctime>
#include <cstdlib>

void PackageSender::setReceiverPreferences(const ReceiverPreferences& receiverPreferences_)
{
    receiverPreferences = receiverPreferences_;
}

void PackageSender::sendPackage()
{
    Package temp = sendingBuffer.back();
    sendingBuffer.pop_back();
    auto probs = receiverPreferences.getProbabilities();
    srand(static_cast<unsigned int>(time(nullptr)));
    double losuj = (rand() % 10000)/10000;
    double prob_sum = 0;
    for(auto i : probs)
    {
        prob_sum += i.second;
        if(prob_sum > losuj)
        {
            i.first->receivePackage(temp);
        }
    }
}

void PackageSender::pushToSendingBuffer(Package package)
{
    sendingBuffer.push_back(package);
}
