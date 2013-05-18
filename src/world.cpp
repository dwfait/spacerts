#include "world.h"

unsigned int World::entity_count()
{
  return m_entities.size();
}

void World::add(Entity& entity)
{
  m_entities.push_back(entity);
}

std::vector<Entity>& World::entities()
{
  return m_entities;
}
