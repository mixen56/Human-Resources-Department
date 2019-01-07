/********************************************************************************
** Form generated from reading UI file 'empty_unit.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMPTY_UNIT_H
#define UI_EMPTY_UNIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Empty_unit
{
public:
    QLabel *empty;
    QPushButton *pushButton;

    void setupUi(QWidget *Empty_unit)
    {
        if (Empty_unit->objectName().isEmpty())
            Empty_unit->setObjectName(QStringLiteral("Empty_unit"));
        Empty_unit->resize(243, 202);
        Empty_unit->setStyleSheet(QLatin1String("background:url(:/resources/img/unit.png);\n"
"background:color rgb(230, 255, 255)"));
        empty = new QLabel(Empty_unit);
        empty->setObjectName(QStringLiteral("empty"));
        empty->setGeometry(QRect(60, 60, 131, 19));
        QFont font;
        font.setPointSize(12);
        empty->setFont(font);
        empty->setStyleSheet(QStringLiteral("background:color transparent"));
        pushButton = new QPushButton(Empty_unit);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(70, 100, 101, 21));
        QFont font1;
        font1.setPointSize(10);
        pushButton->setFont(font1);

        retranslateUi(Empty_unit);

        QMetaObject::connectSlotsByName(Empty_unit);
    } // setupUi

    void retranslateUi(QWidget *Empty_unit)
    {
        Empty_unit->setWindowTitle(QApplication::translate("Empty_unit", "HRD ver 1.0", 0));
        empty->setText(QApplication::translate("Empty_unit", "\320\241\320\276\321\202\321\200\321\203\320\264\320\275\320\270\320\272\320\276\320\262 \320\275\320\265\321\202", 0));
        pushButton->setText(QApplication::translate("Empty_unit", "\320\236\320\272", 0));
    } // retranslateUi

};

namespace Ui {
    class Empty_unit: public Ui_Empty_unit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPTY_UNIT_H
