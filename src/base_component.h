#ifndef __BASE_COMPONENT_H
#define __BASE_COMPONENT_H

#include <string>

class BaseComponent
{
  public:
    virtual std::string type()
    { return "base component"; }

  private:
};

typedef std::shared_ptr<BaseComponent> BaseComponentPtr;

#endif
