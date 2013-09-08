#ifndef __GAME_H
#define __GAME_H

#include "graphics.h"
#include "state_manager.h"

class Game
{
  public:
    Game();
    void run();
  private:
    Graphics graphics;
    StateManager state_manager;
};
#endif
