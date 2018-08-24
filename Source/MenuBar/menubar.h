#ifndef MENUBAR_H
#define MENUBAR_H

#include <QMenuBar>
#include <QMenu>
#include <QAction>

class MenuBar : public QMenuBar
{
    public:
        MenuBar(QWidget *parent);

    private:
        QMenu *file;
        QAction *createNew;
        QAction *open;
        QAction *save;
        QAction *saveAs;

        QMenu *add;
        QAction *mirror;
        QAction *lens;

};

#endif // MENUBAR_H
