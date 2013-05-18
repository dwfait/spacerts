#ifndef __WORLD_H
#define __WORLD_H

#include "entity.h"
#include <vector>

class World
{
  public:
    unsigned int entity_count();

    void add(Entity& entity);

  private:
    std::vector<Entity> entities;

};

#endif
