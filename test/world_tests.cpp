#include "catch/catch.hpp"
#include "../src/world.h"

class TestEntity : public Entity
{
};

TEST_CASE("World/new", "New world has 0 entities")
{
  World world;

  REQUIRE(world.entity_count() == 0);
}

TEST_CASE("World/add", "Can add an entity to the world")
{
  World world;

  TestEntity entity{};

  world.add(entity);

  REQUIRE(world.entity_count() == 1);
}
