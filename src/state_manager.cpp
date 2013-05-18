#include "state_manager.h"

unsigned int StateManager::state_count()
{
  return states.size();
}

void StateManager::add(State& state)
{
  states.push_back(state);
}
