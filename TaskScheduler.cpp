#include "TaskScheduler.h"

TaskScheduler::TaskScheduler(Task **_tasks, uint8_t _numTasks) :
  tasks(_tasks),
  numTasks(_numTasks) {
}

void TaskScheduler::run() {
    uint32_t now = millis();
    Task **tpp = tasks;
    for (int t = 0; t < numTasks; t++) {
        Task *tp = *tpp;
        if (tp->canRun(now)) {
            tp->run(now);
            break;
        }
        tpp++;
    }
}
