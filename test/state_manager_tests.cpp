#include "catch/catch.hpp"

#include "../src/state_manager.h"

TEST_CASE( "State Manager/create", "Initial state count is zero")
{
  StateManager manager;

  REQUIRE(manager.state_count() == 0);
}
