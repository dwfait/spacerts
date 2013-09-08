#include "graphics.h"

//public methods:
Graphics::Graphics() :
  window{sf::VideoMode(800, 600, 32), "Space RTS"}
{
}

void Graphics::render(StatePtr state)
{
  window.clear(sf::Color::Black);

  window.display();
}

