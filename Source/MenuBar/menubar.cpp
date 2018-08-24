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


}
