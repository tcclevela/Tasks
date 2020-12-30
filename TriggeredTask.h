#include <Arduino.h>
#include "Task.h"

#ifndef TriggeredTask_h
#define TriggeredTask_h

class TriggeredTask : public Task {
  public:
    TriggeredTask();
    void trigger();
    void resetTrigger(); 
    bool getTrigger();
    bool canRun(uint32_t now);
  protected:
    bool triggered;
};

#endif
