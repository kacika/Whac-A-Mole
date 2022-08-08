#include <QApplication>
#include "mouse.h"

int main(int argc,char *argv[])
{
	QApplication app(argc,argv);
	Mouse* m=new Mouse;
	m->show();
	return app.exec();
}
