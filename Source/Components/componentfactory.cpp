#include "componentfactory.h"

#include <iostream>
ComponentFactory::ComponentFactory()
{

}

void ComponentFactory::newComponent(std::string description)
{
    if(description.compare("Mirror") == 0)
    {
		manager->add_component(new Mirror);
    }
    else if(description.compare("Lens") == 0)
    {
		manager->add_component(new Lens);
	}
}

void ComponentFactory::setManagerLink(ComponentManager* newlink)
{
	manager = newlink;
}
