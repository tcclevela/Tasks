#include <Arduino.h>
#ifndef Task_h
#define Task_h

class Task {
public:
    virtual bool canRun(uint32_t now) = 0;
    virtual void run(uint32_t now) = 0;
};

#endif
