#ifndef __RENDERABLE_COMPONENT_H
#define __RENDERABLE_COMPONENT_H

#include "base_component.h"

class RenderableComponent : public BaseComponent
{
  public:
    //Override:
    virtual std::string type()
    { return "Renderable"; }

  private:
};

#endif
