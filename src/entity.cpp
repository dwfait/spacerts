#include "entity.h"

unsigned int Entity::s_current_id = 0;

Entity::Entity() :
  m_id{++s_current_id}
{}

unsigned int Entity::current_id()
{
  return s_current_id;
}

unsigned int Entity::id()
{
  return m_id;
}
