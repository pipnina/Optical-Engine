#ifndef COMPONENTMANAGER_H
#define COMPONENTMANAGER_H

#include <vector>
#include <string>
#include <iostream>

#include <QListWidget>
#include <QTreeWidget>

//Forward declaration of ComponentUI, to avoid cyclic header dependancy
class ComponentUI;

#include "UI/componentui.h"
#include "Components/component.h"

#define TYPE_MIRROR 1
#define TYPE_LENS 2


class ComponentManager
{
    public:
        ComponentManager();

		std::vector<Component> components;

		void add_component(Component *newComponent);
		void swap_component(int component1, int component2);
		void remove_component(int component);
        void setUI(ComponentUI *cui);

    private:
        ComponentUI *ui = nullptr;

        QString chooseNameNumber(QString prefix);

};

#endif // COMPONENTMANAGER_H
