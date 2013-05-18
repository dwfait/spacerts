#include "catch/catch.hpp"
#include "../src/state_manager.h"
#include "../src/state.h"

class TestState : public State
{
};

TEST_CASE("State Manager/test1", "Has no states on creation")
{
  StateManager manager;

  REQUIRE(manager.state_count() == 0);
}

TEST_CASE("State Manager/test2", "Can add a test state")
{
  StateManager manager;

  TestState test_state;

  manager.add(test_state);

  REQUIRE(manager.state_count() == 1);
}
