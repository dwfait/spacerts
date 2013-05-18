#ifndef _GRAPHICS__H_
#define _GRAPHICS__H_

#include "SFML/Window.hpp"
#include "SFML/Graphics.hpp"

class Graphics
{
  public:
    Graphics();

    void render();

  private:
    sf::RenderWindow window;
};

#endif
