#include "menubar.h"

MenuBar::MenuBar(QWidget *parent)
{
    setParent(parent);

    file = addMenu("File");
    createNew   = file->addAction("New");
    open        = file->addAction("Open");
    save        = file->addAction("Save");
    saveAs      = file->addAction("Save As");


    add = addMenu("Add");
    mirror  = add->addAction("Mirror");
    lens    = add->addAction("Lens");

	connect(mirror, &QAction::triggered, this, &MenuBar::mirror_signal);
	connect(lens, &QAction::triggered, this, &MenuBar::lens_signal);

}

void MenuBar::setFactoryLink(ComponentFactory* newlink)
{
	factory = newlink;
}

void MenuBar::mirror_signal()
{
	factory->newComponent("Mirror");
}

void MenuBar::lens_signal()
{
	factory->newComponent("Lens");
}
