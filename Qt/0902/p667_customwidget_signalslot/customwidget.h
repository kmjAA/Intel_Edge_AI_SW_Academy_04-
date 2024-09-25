#ifndef __CUSTOM_WIDGET__
#define __CUSTOM_WIDGET__

#include <QWidget>

class customwidget : public QWidget{
	Q_OBJECT	
	public :
			customwidget(QWidget *parent =0);
	signals:
			void widgetClicked();
	public slots:
			void processClick();
};

#endif
