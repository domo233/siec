//
// Created by domino on 29.12.2017.
//

#ifndef OOO_ALIASES_H
#define OOO_ALIASES_H

using Time = int;
using TimeOffset = int;
using ElementID = int;

enum class ReceiverType {WORKER, STOREHOUSE};
enum class QueueType {LIFO, FIFO};

class Package
{
    ElementID id;
    static ElementID packageCounter;
public:
    Package() {
        packageCounter ++;
        id = packageCounter;
    };
    ElementID getID() const {return id;}
};

#endif //OOO_ALIASES_H
