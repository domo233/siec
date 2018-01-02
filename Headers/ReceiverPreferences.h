//
// Created by domino on 29.12.2017.
//

#ifndef OOO_RECEIVERPREFERENCES_H
#define OOO_RECEIVERPREFERENCES_H

#include <map>
#include "IPackageReceiver.h"

class ReceiverPreferences
{
    std::map<IPackageReceiver*, double> probabilities;
public:
    const std::map<IPackageReceiver*, double>& getProbabilities() const;
    void setProbabilities(const std::map<IPackageReceiver*, double>&);
    void addReceiver(IPackageReceiver*);
    void addReceiverWithProbability(IPackageReceiver*, const double&);
    bool removeReceiver(IPackageReceiver*);
    // po co to jest ? IPackageReceiver* drawReceiver();
    // po co to jest ? const std::pair<IPackageReceiver*, double>* view();
};


#endif //OOO_RECEIVERPREFERENCES_H
