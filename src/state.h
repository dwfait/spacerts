#ifndef __STATE_H
#define __STATE_H

#include <string>
#include <memory>

class State
{
  public:
    virtual std::string name() = 0;
};

typedef std::shared_ptr<State> StatePtr;

#endif
