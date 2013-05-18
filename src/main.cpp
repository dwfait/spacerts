#include <iostream>
#include "exceptions.h"
#include "graphics.h"

int main()
{
  Graphics graphics{};

  while (true)
  {
    graphics.render();
  }

  return 0;
}
