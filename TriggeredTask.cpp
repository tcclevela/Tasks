#include "TriggeredTask.h"

TriggeredTask::TriggeredTask() : Task(), triggered(false) {};
bool TriggeredTask::canRun(uint32_t now) {
  return triggered;
  resetTrigger();
};
void TriggeredTask::trigger() { triggered=true; };
void TriggeredTask::resetTrigger() { triggered=false; };
bool TriggeredTask::getTrigger() { return triggered; };
