#include "componentmanager.h"

//COMPONENT MANAGER CONSTRUCTOR
ComponentManager::ComponentManager()
{
}



//### MEMBER FUNCTIONS
void ComponentManager::add_component(Component *newComponent)
{
    //Create new component pointer for the lens
    QString name;
	name = chooseNameNumber(newComponent->name.c_str());
	newComponent->name = name.toStdString();

    //Add it to the components list
	components.emplace_back(*newComponent);

    ui->updateList();
}


    //SWAP TWO COMPONENT'S POSITIONS
void ComponentManager::swap_component(int component1, int component2)
{
	component1 = component1;
	component2 = component2;
    //this is just a stub until i work out if it's really needed or not
}

    //DELETE A COMPONENT
void ComponentManager::remove_component(int component)
{
	component = component;
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

			int matches = component.name.compare(combo.toStdString());
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
