#include "catch/catch.hpp"
#include "../src/entity.h"
#include "../src/base_component.h"

class TestComponent : public BaseComponent
{
  virtual std::string type() { return "TestComponent"; }
};

