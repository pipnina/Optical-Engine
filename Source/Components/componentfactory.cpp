#include "componentfactory.h"

#include <iostream>
ComponentFactory::ComponentFactory(ComponentManager *managerlink)
{
	manager = managerlink;
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
