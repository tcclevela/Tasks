#include <Arduino.h>
#include "Task.h"

#ifndef TaskScheduler_h
#define TaskScheduler_h

class TaskScheduler {
public:
    TaskScheduler() {};
    TaskScheduler(Task **task, uint8_t numTasks);
    void run();
private:
    Task **tasks;
    int numTasks;
};

#endif

