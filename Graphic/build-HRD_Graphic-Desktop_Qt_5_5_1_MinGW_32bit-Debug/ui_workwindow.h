/********************************************************************************
** Form generated from reading UI file 'workwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WORKWINDOW_H
#define UI_WORKWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WorkWindow
{
public:
    QWidget *centralwidget;
    QLabel *name;
    QPushButton *addworker;
    QPushButton *transferworker;
    QPushButton *dismissworker;
    QPushButton *showtable;
    QPushButton *exit;
    QPushButton *setname;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *WorkWindow)
    {
        if (WorkWindow->objectName().isEmpty())
            WorkWindow->setObjectName(QStringLiteral("WorkWindow"));
        WorkWindow->resize(611, 409);
        centralwidget = new QWidget(WorkWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        name = new QLabel(centralwidget);
        name->setObjectName(QStringLiteral("name"));
        name->setGeometry(QRect(20, 10, 274, 16));
        QFont font;
        font.setPointSize(10);
        name->setFont(font);
        addworker = new QPushButton(centralwidget);
        addworker->setObjectName(QStringLiteral("addworker"));
        addworker->setGeometry(QRect(20, 80, 271, 23));
        transferworker = new QPushButton(centralwidget);
        transferworker->setObjectName(QStringLiteral("transferworker"));
        transferworker->setGeometry(QRect(20, 110, 271, 23));
        dismissworker = new QPushButton(centralwidget);
        dismissworker->setObjectName(QStringLiteral("dismissworker"));
        dismissworker->setGeometry(QRect(20, 140, 271, 23));
        showtable = new QPushButton(centralwidget);
        showtable->setObjectName(QStringLiteral("showtable"));
        showtable->setGeometry(QRect(20, 170, 271, 23));
        exit = new QPushButton(centralwidget);
        exit->setObjectName(QStringLiteral("exit"));
        exit->setGeometry(QRect(490, 0, 121, 23));
        setname = new QPushButton(centralwidget);
        setname->setObjectName(QStringLiteral("setname"));
        setname->setGeometry(QRect(20, 50, 271, 23));
        WorkWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(WorkWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 611, 21));
        WorkWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(WorkWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        WorkWindow->setStatusBar(statusbar);

        retranslateUi(WorkWindow);

        QMetaObject::connectSlotsByName(WorkWindow);
    } // setupUi

    void retranslateUi(QMainWindow *WorkWindow)
    {
        WorkWindow->setWindowTitle(QApplication::translate("WorkWindow", "MainWindow", 0));
        name->setText(QApplication::translate("WorkWindow", "\320\222\320\260\321\210\320\260 \320\232\320\276\320\274\320\277\320\260\320\275\320\270\321\217", 0));
        addworker->setText(QApplication::translate("WorkWindow", "\320\236\321\204\320\276\321\200\320\274\320\270\321\202\321\214 \320\275\320\260\320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\265 \321\201\320\276\321\202\321\200\321\203\320\264\320\275\320\270\320\272\320\260 \320\275\320\260 \320\264\320\276\320\273\320\266\320\275\320\276\321\201\321\202\321\214", 0));
        transferworker->setText(QApplication::translate("WorkWindow", "\320\236\321\204\320\276\321\200\320\274\320\270\321\202\321\214 \320\277\320\265\321\200\320\265\320\262\320\276\320\264 \321\201\320\276\321\202\321\200\321\203\320\264\320\275\320\270\320\272\320\260 \320\262 \320\264\321\200\321\203\320\263\320\276\320\271 \320\276\321\202\320\264\320\265\320\273", 0));
        dismissworker->setText(QApplication::translate("WorkWindow", "\320\243\320\262\320\276\320\273\320\270\321\202\321\214 \321\201\320\276\321\202\321\200\321\203\320\264\320\275\320\270\320\272\320\260", 0));
        showtable->setText(QApplication::translate("WorkWindow", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214 \321\201\321\202\321\200\321\203\320\272\321\202\321\203\321\200\321\203 \320\277\321\200\320\265\320\264\320\277\321\200\320\270\321\217\321\202\320\270\321\217", 0));
        exit->setText(QApplication::translate("WorkWindow", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\321\203", 0));
        setname->setText(QApplication::translate("WorkWindow", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \320\275\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\272\320\276\320\274\320\277\320\260\320\275\320\270\320\270", 0));
    } // retranslateUi

};

namespace Ui {
    class WorkWindow: public Ui_WorkWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORKWINDOW_H
