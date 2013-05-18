#include "world.h"

unsigned int World::entity_count()
{
  return entities.size();
}

void World::add(Entity& entity)
{
  entities.push_back(entity);
}
