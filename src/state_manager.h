#ifndef __STATE_MANAGER_H
#define __STATE_MANAGER_H

#include "state.h"
#include <vector>

class StateManager
{
  public:
    unsigned int state_count();
    void add(State& state);

  private:
    std::vector<State> states;

};

#endif
