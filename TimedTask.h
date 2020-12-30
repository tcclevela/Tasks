#include <Arduino.h>
#include "Task.h"

#ifndef TimedTask_h
#define TimedTask_h

class TimedTask : public Task {
  public:
    TimedTask() {};
    TimedTask(uint32_t nextRunTime);
    void setRunTime(uint32_t nextRunTime);
    void incRunTime(uint32_t inc);
    uint32_t getRunTime();
    virtual bool canRun(uint32_t now);
  protected:
    uint32_t runTime;
};

#endif
