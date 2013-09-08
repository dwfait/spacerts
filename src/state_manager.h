#ifndef __STATE_MANAGER_H
#define __STATE_MANAGER_H

#include "state.h"
#include <vector>

#include "state_repository.h"

class StateManager
{
  public:
    StateManager(StatePtr initial_state);

    void add(StatePtr state);
    StatePtr current_state();
    void update_current_state();


  private:
    StateRepository m_repo;

    StatePtr m_current_state;

};

#endif
