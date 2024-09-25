#include <QApplication>

#include "customwidget.h"

int main(int argc, char **argv)
{
	QApplication app(argc,argv);

	customwidget *widget = new customwidget(0);
	widget -> show();

	return app.exec();
}
