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

void Entity::register_component(BaseComponent& component)
{
  m_component_map[component.type()] = component;
}

bool Entity::has_component(BaseComponent& component)
{
  return has_component_type(component.type());
}

bool Entity::has_component_type(std::string type)
{
  auto it = m_component_map.find(type);

  if (it == m_component_map.end())
  {
    return false;
  } else {
    return true;
  }
}
