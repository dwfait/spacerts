#include "game.h"
#include "test_state.h"

Game::Game() :
  state_manager(StatePtr(new TestState{}))
{}

void Game::run()
{
  state_manager.update_current_state();
  graphics.render(state_manager.current_state());
}
