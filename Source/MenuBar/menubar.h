#ifndef MENUBAR_H
#define MENUBAR_H

#include <QMenuBar>
#include <QMenu>
#include <QAction>
#include <string>

#include <Components/componentfactory.h>

class MenuBar : public QMenuBar
{
    public:
		MenuBar(QWidget *parent, ComponentFactory *faclink);

    private:
        QMenu *file;
        QAction *createNew;
        QAction *open;
        QAction *save;
        QAction *saveAs;

        QMenu *add;
        QAction *mirror;
        QAction *lens;

		ComponentFactory *factory;

	private slots:
		void mirror_signal();
		void lens_signal();
};

#endif // MENUBAR_H
