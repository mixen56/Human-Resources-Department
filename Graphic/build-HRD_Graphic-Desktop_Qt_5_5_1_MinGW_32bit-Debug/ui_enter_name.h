/********************************************************************************
** Form generated from reading UI file 'enter_name.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENTER_NAME_H
#define UI_ENTER_NAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Enter_Name
{
public:
    QLabel *label;
    QLineEdit *enternameofunit;
    QPushButton *setnameofunit;

    void setupUi(QWidget *Enter_Name)
    {
        if (Enter_Name->objectName().isEmpty())
            Enter_Name->setObjectName(QStringLiteral("Enter_Name"));
        Enter_Name->setWindowModality(Qt::NonModal);
        Enter_Name->resize(235, 155);
        Enter_Name->setMinimumSize(QSize(235, 155));
        Enter_Name->setMaximumSize(QSize(235, 155));
        Enter_Name->setStyleSheet(QLatin1String("background: url(:/resources/img/unit.png) no-repeat;\n"
"background:color rgb(230, 255, 255);\n"
""));
        label = new QLabel(Enter_Name);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 30, 187, 16));
        QFont font;
        font.setPointSize(10);
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("background:transparent"));
        enternameofunit = new QLineEdit(Enter_Name);
        enternameofunit->setObjectName(QStringLiteral("enternameofunit"));
        enternameofunit->setGeometry(QRect(50, 60, 121, 20));
        enternameofunit->setStyleSheet(QStringLiteral("Background:white"));
        setnameofunit = new QPushButton(Enter_Name);
        setnameofunit->setObjectName(QStringLiteral("setnameofunit"));
        setnameofunit->setGeometry(QRect(50, 90, 121, 23));

        retranslateUi(Enter_Name);

        QMetaObject::connectSlotsByName(Enter_Name);
    } // setupUi

    void retranslateUi(QWidget *Enter_Name)
    {
        Enter_Name->setWindowTitle(QApplication::translate("Enter_Name", "HRD ver 1.0", 0));
        label->setText(QApplication::translate("Enter_Name", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\275\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\277\321\200\320\265\320\264\320\277\321\200\320\270\321\217\321\202\320\270\321\217", 0));
        setnameofunit->setText(QApplication::translate("Enter_Name", "\320\267\320\260\320\264\320\260\321\202\321\214 \320\275\320\260\320\267\320\262\320\260\320\275\320\270\320\265", 0));
    } // retranslateUi

};

namespace Ui {
    class Enter_Name: public Ui_Enter_Name {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENTER_NAME_H
