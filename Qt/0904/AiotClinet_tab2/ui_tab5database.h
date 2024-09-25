/********************************************************************************
** Form generated from reading UI file 'tab5database.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAB5DATABASE_H
#define UI_TAB5DATABASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Tab5Database
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QDateTimeEdit *pDateTimeEditFrom;
    QDateTimeEdit *pDateTimeEditTo;
    QPushButton *pPBsearchDb;
    QPushButton *pPBdeleteDb;
    QHBoxLayout *horizontalLayout_2;
    QTableWidget *pTBSensor;
    QVBoxLayout *pChartViewLayout;

    void setupUi(QWidget *Tab5Database)
    {
        if (Tab5Database->objectName().isEmpty())
            Tab5Database->setObjectName(QString::fromUtf8("Tab5Database"));
        Tab5Database->resize(564, 364);
        verticalLayout = new QVBoxLayout(Tab5Database);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pDateTimeEditFrom = new QDateTimeEdit(Tab5Database);
        pDateTimeEditFrom->setObjectName(QString::fromUtf8("pDateTimeEditFrom"));
        pDateTimeEditFrom->setDateTime(QDateTime(QDate(2023, 12, 29), QTime(0, 0, 0)));

        horizontalLayout->addWidget(pDateTimeEditFrom);

        pDateTimeEditTo = new QDateTimeEdit(Tab5Database);
        pDateTimeEditTo->setObjectName(QString::fromUtf8("pDateTimeEditTo"));
        pDateTimeEditTo->setDateTime(QDateTime(QDate(2024, 6, 30), QTime(0, 0, 0)));

        horizontalLayout->addWidget(pDateTimeEditTo);

        pPBsearchDb = new QPushButton(Tab5Database);
        pPBsearchDb->setObjectName(QString::fromUtf8("pPBsearchDb"));

        horizontalLayout->addWidget(pPBsearchDb);

        pPBdeleteDb = new QPushButton(Tab5Database);
        pPBdeleteDb->setObjectName(QString::fromUtf8("pPBdeleteDb"));

        horizontalLayout->addWidget(pPBdeleteDb);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pTBSensor = new QTableWidget(Tab5Database);
        if (pTBSensor->columnCount() < 3)
            pTBSensor->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        pTBSensor->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        pTBSensor->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        pTBSensor->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        pTBSensor->setObjectName(QString::fromUtf8("pTBSensor"));

        horizontalLayout_2->addWidget(pTBSensor);

        pChartViewLayout = new QVBoxLayout();
        pChartViewLayout->setObjectName(QString::fromUtf8("pChartViewLayout"));

        horizontalLayout_2->addLayout(pChartViewLayout);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(Tab5Database);

        QMetaObject::connectSlotsByName(Tab5Database);
    } // setupUi

    void retranslateUi(QWidget *Tab5Database)
    {
        Tab5Database->setWindowTitle(QCoreApplication::translate("Tab5Database", "Form", nullptr));
        pPBsearchDb->setText(QCoreApplication::translate("Tab5Database", "\354\241\260\355\232\214", nullptr));
        pPBdeleteDb->setText(QCoreApplication::translate("Tab5Database", "\354\202\255\354\240\234", nullptr));
        QTableWidgetItem *___qtablewidgetitem = pTBSensor->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Tab5Database", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = pTBSensor->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Tab5Database", "\353\202\240\354\247\234", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = pTBSensor->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("Tab5Database", "\354\241\260\353\217\204", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Tab5Database: public Ui_Tab5Database {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAB5DATABASE_H
