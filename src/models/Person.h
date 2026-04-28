#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

class Person {
public:
    int id;
    int urgency;
    int waitingTime;
    string serviceType;
    double priority;

    Person(int id, int urgency, string type);
};

#endif