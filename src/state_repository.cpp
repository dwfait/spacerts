#include "state_repository.h"
#include "test_state.h"
#include <exception>

StatePtr StateRepository::fetch(std::string name)
{
  auto it = states.find(name);

  if (it == states.end())
  {
    throw std::runtime_error{"Can't find state"};
  }

  return states.find(name)->second;
}

void StateRepository::insert(StatePtr state)
{
  auto result = states.emplace(state->name(), state);

  // Duplicate key already in map
  if (result.second == false)
  {
    // Unless the state already here is the one we're adding
    if (result.first->second.get() != state.get())
    {
      throw std::runtime_error{"State is already in repository"};
    }
  }
}
