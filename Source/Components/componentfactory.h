#ifndef COMPONENTFACTORY_H
#define COMPONENTFACTORY_H

#include "Components/componentmanager.h"
#include "Components/lens.h"
#include "Components/mirror.h"

class ComponentFactory
{
    public:
		ComponentFactory(ComponentManager *managerlink);
		void newComponent(std::string description);

    private:
        ComponentManager* manager;
};

#endif // COMPONENTFACTORY_H
