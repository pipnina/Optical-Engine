#include "componentmanager.h"

//COMPONENT MANAGER CONSTRUCTOR
ComponentManager::ComponentManager()
{
}



//### MEMBER FUNCTIONS
void ComponentManager::add_lens()
{
    //Create lens object
    Lens newlens;
    newlens.set_diameter(50.0);
    newlens.set_side1_conic_constant(0.0);
    newlens.set_side1_focal_ratio(0.5);
    newlens.set_side2_conic_constant(0.0);
    newlens.set_side2_focal_ratio(0.5);
    //Add it to the lens list
    lenses.emplace_back(newlens);

    //Create new component pointer for the lens
    componentPointer newComponent;
    newComponent.list_position = components.size();
    newComponent.list_type = TYPE_LENS;
    QString name;
    name = chooseNameNumber("Lens ");
    newComponent.name.append(name);

    //Add it to the components list
    components.emplace_back(newComponent);

    ui->updateList();
}

void ComponentManager::add_mirror()
{
    //Create a new mirror object
    Mirror newmirror;
    newmirror.set_diameter(250);
    newmirror.set_conic_constant(1.0);
    newmirror.set_hole_size(0.0);
    newmirror.set_focal_ratio(5.0);

    //Add it to the mirror list
    mirrors.emplace_back(newmirror);

    //Create new component pointer for the mirror
    componentPointer newComponent;
    newComponent.list_position = components.size();
    newComponent.list_type = TYPE_MIRROR;
    QString name;
    name = chooseNameNumber("Mirror ");
    newComponent.name.append(name);

    //Add it to the components list
    components.emplace_back(newComponent);

    ui->updateList();
}

    //SWAP TWO COMPONENT'S POSITIONS
void ComponentManager::swap_component(componentPointer component1, componentPointer component2)
{
    component1.name = component1.name;
    component2.name = component2.name;
    //this is just a stub until i work out if it's really needed or not
}

    //DELETE A COMPONENT
void ComponentManager::remove_component(componentPointer component)
{
    //Removing a component involves deleting the
}

    //LET ComponentManager KNOW A UI EXISTS TO RECIEVE SIGNALS
void ComponentManager::setUI(ComponentUI *cui)
{
    ui = cui;
}


    //HELPER FUNCTIONS
        //We use this function to pick a number to append to the name of an object,
        //so that we do not create objects with the same name
QString ComponentManager::chooseNameNumber(QString prefix)
{
    //"prefix" is the name chosen by the creation function.
    //The QString we return is the whole name (i.e. "Mirror 12")

    //Final name will be returned when a unique name has been created
    QString finalName;

    //Goal of this function is to find a prefix+number combination
    //that is not in use
    int number = 1;
    bool name_unique = false;
    while(!name_unique)
    {
        //Create the name to test
        QString combo;
        combo.append(prefix);
        QString numberAppend;
        numberAppend.setNum(number, 10);
        combo.append(numberAppend);

        //Test if the name is unique
        int sameNames = 0;
        for(auto component : components)
        {
            int matches = QString::compare(component.name, combo);
            std::cout << "Matches: " << matches << "\n";
            if(matches == 0)
            {
                sameNames++;
                break;
            }
        }
        if(sameNames >= 1)
        {
            number++;
        }
        else
        {
            name_unique = true;
            finalName = combo;
            std::cout << "Combo: " << combo.toStdString() << "\n";
        }
    }
    std::cout << "FinalName: " << finalName.toStdString() << "\n";
    return finalName;
}
