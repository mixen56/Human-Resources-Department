/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

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
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *dismiss;
    QPushButton *show_struct;
    QLabel *label;
    QPushButton *enter_name_of_corp;
    QPushButton *add;
    QPushButton *transfer;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(272, 389);
        MainWindow->setMinimumSize(QSize(272, 389));
        MainWindow->setMaximumSize(QSize(540, 500));
        MainWindow->setMouseTracking(false);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QLatin1String("background: url(:/resources/img/unit.png) no-repeat;\n"
"background-size: cover\n"
"\n"
"\n"
"\n"
"\n"
""));
        MainWindow->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        MainWindow->setDocumentMode(true);
        MainWindow->setTabShape(QTabWidget::Triangular);
        MainWindow->setDockNestingEnabled(true);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        dismiss = new QPushButton(centralWidget);
        dismiss->setObjectName(QStringLiteral("dismiss"));
        dismiss->setGeometry(QRect(10, 190, 251, 41));
        QFont font;
        font.setPointSize(10);
        dismiss->setFont(font);
        show_struct = new QPushButton(centralWidget);
        show_struct->setObjectName(QStringLiteral("show_struct"));
        show_struct->setGeometry(QRect(10, 240, 251, 41));
        show_struct->setFont(font);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 20, 88, 16));
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("background:transparent"));
        enter_name_of_corp = new QPushButton(centralWidget);
        enter_name_of_corp->setObjectName(QStringLiteral("enter_name_of_corp"));
        enter_name_of_corp->setGeometry(QRect(10, 43, 251, 41));
        enter_name_of_corp->setFont(font);
        add = new QPushButton(centralWidget);
        add->setObjectName(QStringLiteral("add"));
        add->setGeometry(QRect(10, 93, 251, 41));
        add->setFont(font);
        transfer = new QPushButton(centralWidget);
        transfer->setObjectName(QStringLiteral("transfer"));
        transfer->setGeometry(QRect(10, 140, 251, 41));
        transfer->setFont(font);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 272, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "HRD ver 1.0", 0));
        dismiss->setText(QApplication::translate("MainWindow", "\320\236\321\204\320\276\321\200\320\274\320\270\321\202\321\214 \321\203\320\262\320\276\320\273\321\214\320\275\320\265\320\275\320\270\320\265 \321\201\320\276\321\202\321\200\321\203\320\264\320\275\320\270\320\272\320\260", 0));
        show_struct->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\262\320\265\321\201\321\202\320\270 \321\201\321\202\321\200\321\203\320\272\321\202\321\203\321\200\321\203 \320\277\321\200\320\265\320\264\320\277\321\200\320\270\321\217\321\202\320\270\321\217", 0));
        label->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:600;\">\320\237\321\200\320\265\320\264\320\277\321\200\320\270\321\217\321\202\320\270\320\265</span></p></body></html>", 0));
        enter_name_of_corp->setText(QApplication::translate("MainWindow", "\320\222\320\262\320\265\321\201\321\202\320\270 \320\275\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\277\321\200\320\265\320\264\320\277\321\200\320\270\321\217\321\202\320\270\321\217", 0));
        add->setText(QApplication::translate("MainWindow", "\320\236\321\204\320\276\321\200\320\274\320\270\321\202\321\214 \320\275\320\260\320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\265 \321\201\320\276\321\202\321\200\321\203\320\264\320\275\320\270\320\272\320\260", 0));
        transfer->setText(QApplication::translate("MainWindow", "\320\236\321\204\320\276\321\200\320\274\320\270\321\202\321\214 \320\277\320\265\321\200\320\265\320\262\320\276\320\264 \321\201\320\276\321\202\321\200\321\203\320\264\320\275\320\270\320\272\320\260", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
