#define CATCH_CONFIG_MAIN  // This tell CATCH to provide a main() - only do this in one cpp file
#include "catch/catch.hpp"
#include "../src/exceptions.h"

void test_throws()
{
  throw GameException("test exceptions");
}

TEST_CASE( "example/exception", "Test exceptions are set up" ) {
  REQUIRE_THROWS( test_throws() );
}
