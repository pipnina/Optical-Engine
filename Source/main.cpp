#include <QApplication>
#include <QMainWindow>

#include "MenuBar/menubar.h"
#include "Components/componentmanager.h"
#include "UI/componentui.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QMainWindow window;
    window.resize(1280, 720);
    window.setWindowTitle("Optical Engine V0.0.0a");
    window.show();


    MenuBar menuBar(&window);
    menuBar.show();

    ComponentManager manager;
    ComponentUI componentUI(&window, &manager);
    manager.setUI(&componentUI);

    manager.add_mirror();
    manager.add_lens();

    manager.add_mirror();
    manager.add_lens();

    manager.add_mirror();
    manager.add_lens();

    manager.add_mirror();
    manager.add_lens();

    manager.add_mirror();
    manager.add_lens();

    manager.add_mirror();
    manager.add_lens();


    return a.exec();
}
