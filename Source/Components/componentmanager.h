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
#include "Components/lens.h"
#include "Components/mirror.h"

#define TYPE_MIRROR 1
#define TYPE_LENS 2

struct componentPointer
{
    int list_type;
    int list_position;
    QString name;
    QListWidgetItem *widgetItem;
};

class ComponentManager
{
    public:
        ComponentManager();

        std::vector<Mirror> mirrors;
        std::vector<Lens> lenses;
        std::vector<componentPointer> components;

        void add_lens();
        void add_mirror();
        void swap_component(componentPointer component1, componentPointer component2);
        void remove_component(componentPointer component);
        void setUI(ComponentUI *cui);

    private:
        ComponentUI *ui = nullptr;

        QString chooseNameNumber(QString prefix);

};

#endif // COMPONENTMANAGER_H
