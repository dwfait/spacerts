#ifndef __STATE_REPOSITORY_H
#define __STATE_REPOSITORY_H

#include "state.h"
#include <vector>
#include <map>

typedef std::map<std::string, StatePtr> StateMap;

class StateRepository
{
  public:
    StatePtr fetch(std::string name);
    void insert(StatePtr state);

  private:
    StateMap states;
};

#endif
