#ifndef __TEST_STATE_H
#define __TEST_STATE_H

#include "state.h"

class TestState : public State
{
  public:
    virtual std::string name()
    {
      return "test state";
    }
};

#endif
