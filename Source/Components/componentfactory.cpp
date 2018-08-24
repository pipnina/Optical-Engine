#include "componentfactory.h"

ComponentFactory::ComponentFactory()
{

}

Component* ComponentFactory::newComponent(std::string description)
{
    if(description.compare("Mirror") == 0)
    {
        return new Mirror;
    }
    else if(description.compare("Lens") == 0)
    {
        return new Lens;
    }
    else
    {
        return nullptr;
    }
}
