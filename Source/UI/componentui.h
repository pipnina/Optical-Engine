#ifndef COMPONENTUI_H
#define COMPONENTUI_H

#include <QMainWindow>
#include <QListWidget>
#include <QTreeWidget>

//Forward declaration of ComponentManager, to avoid cyclic header dependancy
class ComponentManager;

#include "Components/componentmanager.h"

class ComponentUI
{
    public:
		ComponentUI(QWidget *parent, ComponentManager *managerLink);
        void updateList();

    private:
        QListWidget *objectList;
        QTreeWidget *properties;
        ComponentManager *manager;
};

#endif // COMPONENTUI_H
