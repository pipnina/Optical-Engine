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
    window.setWindowTitle("Optical Engine V0.0.0a");
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

    return a.exec();
}
