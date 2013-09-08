#include "catch/catch.hpp"
#include "../src/state_repository.h"

#include "stubs/test_state_stub.h"


TEST_CASE("State Repository/fetching", "Can fetch an inserted state")
{
  StatePtr state{new TestState};

  StateRepository repo{};

  repo.insert(state);

  REQUIRE(repo.fetch(state->name()).get() == state.get());
}

TEST_CASE("State Repository/unknown state", "Fetching unknown state throws exception")
{
  StateRepository repo{};

  REQUIRE_THROWS(repo.fetch("some state"));
}

TEST_CASE("State Repository/duplicate states", "should throw if attempt to insert duplicate state")
{
  StatePtr state1{new TestState};
  StatePtr state2{new TestState};
  StateRepository repo{};

  repo.insert(state1);
  REQUIRE_THROWS(repo.insert(state2));
}

TEST_CASE("State Repository/same state inserted", "should be ignored")
{
  StatePtr state{new TestState};
  StateRepository repo{};

  repo.insert(state);
  REQUIRE_NOTHROW(repo.insert(state));
}
