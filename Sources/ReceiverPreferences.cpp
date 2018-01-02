//
// Created by domino on 29.12.2017.
//

#include "../Headers/ReceiverPreferences.h"

const std::map<IPackageReceiver*, double>& ReceiverPreferences::getProbabilities() const
{
    return probabilities;
};

void ReceiverPreferences::setProbabilities(const std::map<IPackageReceiver*, double>& probabilities_)
{
    probabilities = probabilities_;
}

void ReceiverPreferences::addReceiver(IPackageReceiver* receiver_)
{
    int size = probabilities.size();
    double prob = 1/(1+size);
    for(auto i = probabilities.begin(); i != probabilities.end(); i++)
    {
        i->second = prob;
    }
    probabilities.insert(std::pair<IPackageReceiver*, double>(receiver_,prob));
}

void ReceiverPreferences::addReceiverWithProbability(IPackageReceiver* receiver_, const double& probability_)
{
    for(auto i = probabilities.begin(); i != probabilities.end(); i++)
    {
        i->second = (1-probability_)*i->second;
    }
    probabilities.insert(std::pair<IPackageReceiver*, double>(receiver_,probability_));
}

bool ReceiverPreferences::removeReceiver(IPackageReceiver* receiver_)
{
    auto it = probabilities.find(receiver_);
    if(it == probabilities.end()) return false;
    else
    {
        double prob = it->second;
        probabilities.erase(it);
        for(auto & i : probabilities)
        {
            i.second = i.second/(1-prob);
        }
        return true;
    }
}
