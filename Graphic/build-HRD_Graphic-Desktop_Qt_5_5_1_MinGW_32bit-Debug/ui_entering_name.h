/********************************************************************************
** Form generated from reading UI file 'entering_name.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENTERING_NAME_H
#define UI_ENTERING_NAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Entering_name
{
public:
    QLabel *label;
    QPushButton *RECRUIT;
    QPushButton *TRANSFER;
    QPushButton *DISMISS;
    QPushButton *SHOW;

    void setupUi(QDialog *Entering_name)
    {
        if (Entering_name->objectName().isEmpty())
            Entering_name->setObjectName(QStringLiteral("Entering_name"));
        Entering_name->resize(600, 186);
        QFont font;
        font.setPointSize(10);
        font.setBold(false);
        font.setWeight(50);
        Entering_name->setFont(font);
        label = new QLabel(Entering_name);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(130, 10, 331, 20));
        QFont font1;
        font1.setPointSize(12);
        label->setFont(font1);
        RECRUIT = new QPushButton(Entering_name);
        RECRUIT->setObjectName(QStringLiteral("RECRUIT"));
        RECRUIT->setGeometry(QRect(20, 40, 551, 23));
        TRANSFER = new QPushButton(Entering_name);
        TRANSFER->setObjectName(QStringLiteral("TRANSFER"));
        TRANSFER->setGeometry(QRect(20, 70, 551, 23));
        DISMISS = new QPushButton(Entering_name);
        DISMISS->setObjectName(QStringLiteral("DISMISS"));
        DISMISS->setGeometry(QRect(20, 100, 551, 23));
        SHOW = new QPushButton(Entering_name);
        SHOW->setObjectName(QStringLiteral("SHOW"));
        SHOW->setGeometry(QRect(20, 130, 551, 23));

        retranslateUi(Entering_name);

        QMetaObject::connectSlotsByName(Entering_name);
    } // setupUi

    void retranslateUi(QDialog *Entering_name)
    {
        Entering_name->setWindowTitle(QApplication::translate("Entering_name", "Dialog", 0));
        label->setText(QApplication::translate("Entering_name", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \320\276\320\264\320\270\320\275 \320\270\320\267 \320\277\321\200\320\265\320\264\321\201\321\202\320\260\320\262\320\273\320\265\320\275\320\275\321\213\321\205 \320\277\321\203\320\275\320\272\321\202\320\276\320\262", 0));
        RECRUIT->setText(QApplication::translate("Entering_name", "\320\236\321\204\320\276\321\200\320\274\320\270\321\202\321\214 \320\275\320\260\320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\265 \321\201\320\276\321\202\321\200\321\203\320\264\320\275\320\270\320\272\320\260 \320\275\320\260 \320\264\320\276\320\273\320\266\320\275\320\276\321\201\321\202\321\214", 0));
        TRANSFER->setText(QApplication::translate("Entering_name", "\320\236\321\204\320\276\321\200\320\274\320\270\321\202\321\214 \320\277\320\265\321\200\320\265\320\262\320\276\320\264 \321\201\320\276\321\202\321\200\321\203\320\264\320\275\320\270\320\272\320\260", 0));
        DISMISS->setText(QApplication::translate("Entering_name", "\320\236\321\204\320\276\321\200\320\274\320\270\321\202\321\214 \321\203\320\262\320\276\320\273\321\214\320\275\320\265\320\275\320\270\320\265 \321\201\320\276\321\202\321\200\321\203\320\264\320\275\320\270\320\272\320\260", 0));
        SHOW->setText(QApplication::translate("Entering_name", "\320\222\321\213\320\262\320\265\321\201\321\202\320\270 \321\201\321\202\321\200\321\203\320\272\321\202\321\203\321\200\321\203 \320\277\321\200\320\265\320\264\320\277\321\200\320\270\321\217\321\202\320\270\321\217", 0));
    } // retranslateUi

};

namespace Ui {
    class Entering_name: public Ui_Entering_name {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENTERING_NAME_H
