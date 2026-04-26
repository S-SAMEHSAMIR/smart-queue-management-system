#include "Person.h"

Person::Person(int id, int urgency, string type) {
    this->id = id;
    this->urgency = urgency;
    this->waitingTime = 0;
    this->serviceType = type;
    this->priority = 0;
}