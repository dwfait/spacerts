#ifndef _GRAPHICS__H_
#define _GRAPHICS__H_

#include "SFML/Window.hpp"
#include "SFML/Graphics.hpp"
#include "SFML/Graphics/Text.hpp"
#include "state.h"

class Graphics
{
  public:
    Graphics();

    void render(StatePtr state);

  private:
    sf::RenderWindow window;
};

#endif
