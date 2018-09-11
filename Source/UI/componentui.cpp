#include "componentui.h"

ComponentUI::ComponentUI(QWidget *parent, ComponentManager *managerLink)
{
    //We will initialize the two widgets first, and then set them up properly
        //The list widget displays the components
	objectList = new QListWidget(parent);
	objectList->resize(200,150);
    objectList->move(0, 30);
    objectList->show();

        //The tree widget shows the selected object's peroperties
	properties = new QTreeWidget(parent);
	properties->resize(200, 250);
    properties->move(0, 190);
    properties->show();
    properties->setColumnCount(2);

	QString column1("Properties");
    QString column2("Values");
    QList<QString> strings;
    strings.append(column1);
    strings.append(column2);
    QStringList labels(strings);
    properties->setHeaderLabels(labels);

    //Link the manager
    manager = managerLink;
}

void ComponentUI::updateList()
{
    //Run component list -> widget check to find missing components
    for(uint component=0; component < manager->components.size(); component++)
    {
        //Find the respective item
		QList<QListWidgetItem*> item = objectList->findItems(QString::fromStdString(manager->components[component].name), Qt::MatchExactly);
        if(item.size() == 0) //The component does not exist
        {
			objectList->insertItem(component, QString::fromStdString(manager->components[component].name));
        }
    }
    //Run widget -> component list check to find orphaned list elements
}
