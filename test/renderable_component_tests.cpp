#include "catch/catch.hpp"
#include "../src/renderable_component.h"
#include "../src/entity.h"

TEST_CASE("Renderable/type", "Renderable returns correct type")
{
  RenderableComponent renderable{};

  REQUIRE(renderable.type() == "Renderable");
}

TEST_CASE("Renderable/new", "Can create a new entity with a renderable component")
{
  Entity entity{};

  RenderableComponent renderable{};

  entity.register_component(renderable);

  REQUIRE(entity.has_component(renderable));
}
