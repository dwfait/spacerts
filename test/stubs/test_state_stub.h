#ifndef __TEST_STATE_STUB_
#define __TEST_STATE_STUB_

#include "../../src/state.h"

class TestState : public State
{
  public:
    virtual std::string name() { return "Test class"; }
};

#endif
