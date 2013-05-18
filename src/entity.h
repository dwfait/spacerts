#ifndef __ENTITY_H
#define __ENTITY_H

class Entity
{
  public:
    Entity();
    unsigned int id();

    static unsigned int current_id();

  private:
    static unsigned int s_current_id;
    unsigned int m_id;

};

#endif
