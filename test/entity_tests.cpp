#include "catch/catch.hpp"
#include "../src/entity.h"

//class TestEntity : public Entity
//{
//};

TEST_CASE("Entity/new", "New entity has a valid ID")
{
  Entity entity{};

  REQUIRE(entity.id() >= 0);
}

TEST_CASE("Entity/unique", "New entity has a unique ID")
{
  Entity entity1{};
  Entity entity2{};

  REQUIRE(entity1.id() != entity2.id());
}

TEST_CASE("Entity/consecutive_id", "100th entity should have ID of 100")
{
  unsigned int current_id = Entity::current_id();

  for (unsigned int i = 0; i < 99; ++i)
  {
    Entity entity{};
  }

  Entity entity{};

  REQUIRE(entity.id() == 100+current_id);
}
