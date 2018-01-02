//
// Created by domino on 30.12.2017.
//

#ifndef OOO_FACTORY_H
#define OOO_FACTORY_H

#include "Ramp.h"
#include "Worker.h"
#include "Storehouse.h"

class Factory
{
    std::vector<Ramp> ramps;
    std::vector<Worker> workers;
    std::vector<Storehouse> storehouses;
public:
    Ramp* getRamps();
    void addRamp(Ramp);
    void removeRamp(ElementID);
    Worker* getWorkers();
    void addWorker(Worker);
    void removeWorker(ElementID);
    Storehouse* getStorehouses();
    void addStorehouse(Storehouse);
    void removeStorehouse(ElementID);
    bool isConsistent();
};

#endif //OOO_FACTORY_H
