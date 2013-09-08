#include "state_manager.h"

StateManager::StateManager(StatePtr initial_state)
{
  m_repo.insert(initial_state);
  m_current_state = initial_state;
}

void StateManager::add(StatePtr state)
{
  m_repo.insert(state);
}

StatePtr StateManager::current_state()
{
  return m_current_state;
}

void StateManager::update_current_state()
{

}
