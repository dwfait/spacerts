#include <stdexcept>

class GameException : public std::runtime_error
{
  public:
    GameException(std::string message) :
      std::runtime_error(message)
    { }
};
