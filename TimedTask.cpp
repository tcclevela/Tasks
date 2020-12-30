#include "TimedTask.h"

TimedTask::TimedTask(uint32_t nextRunTime) : Task() { runTime = nextRunTime; };
bool TimedTask::canRun(uint32_t now) { return now >= runTime; };
void TimedTask::setRunTime(uint32_t nextRunTime) { runTime = nextRunTime; };
void TimedTask::incRunTime(uint32_t inc) { runTime += inc; };
uint32_t TimedTask::getRunTime() { return runTime; };
