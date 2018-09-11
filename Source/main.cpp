#include <QApplication>
#include <QMainWindow>


#include "Components/componentmanager.h"
#include "Components/componentfactory.h"
#include "MenuBar/menubar.h"
#include "UI/componentui.h"

#include "Components/mirror.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QMainWindow window;
    window.resize(1280, 720);
	window.setWindowTitle("Optical Engine V0.1c");
    window.show();

	ComponentManager manager;
	ComponentUI componentUI(&window, &manager);
	manager.setUI(&componentUI);

	ComponentFactory factory(&manager);

	MenuBar menuBar(&window, &factory);
    menuBar.show();

	Mirror newMirror;
	newMirror.name = "Meeem";

	manager.add_component(&newMirror);

	QTreeWidget *properties;
	properties = new QTreeWidget(&window);
	properties->resize(150, 250);
	properties->move(250, 190);
	properties->show();
	properties->setColumnCount(2);

	QString column1("Bobs");
	QString column2("vagenes");
	QList<QString> strings;
	strings.append(column1);
	strings.append(column2);
	QStringList labels(strings);
	properties->setHeaderLabels(labels);

    return a.exec();
}
