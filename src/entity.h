#ifndef __ENTITY_H
#define __ENTITY_H
#include "base_component.h"
#include <unordered_map>

/**
 * Core of the component based design - an entity can be thought of
 * nothing more than an ID used to address components.
 **/

class Entity
{
  public:
    Entity();
    unsigned int id();

    static unsigned int current_id();

    void register_component(BaseComponent& component);

    bool has_component_type(std::string type);
    bool has_component(BaseComponent& component);

    void update();

  private:
    static unsigned int s_current_id;
    unsigned int m_id;

    std::unordered_map<std::string, BaseComponent> m_component_map;
};

#endif
