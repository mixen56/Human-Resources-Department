/********************************************************************************
** Form generated from reading UI file 'dismiss.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISMISS_H
#define UI_DISMISS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dismiss
{
public:
    QPushButton *push_dismiss;
    QLabel *label;
    QComboBox *comboBox;
    QLabel *label_2;
    QLabel *image;

    void setupUi(QWidget *Dismiss)
    {
        if (Dismiss->objectName().isEmpty())
            Dismiss->setObjectName(QStringLiteral("Dismiss"));
        Dismiss->resize(509, 278);
        Dismiss->setMinimumSize(QSize(509, 278));
        Dismiss->setMaximumSize(QSize(509, 278));
        Dismiss->setStyleSheet(QStringLiteral("background: url(:/resources/img/unit.png) no-repeat;"));
        push_dismiss = new QPushButton(Dismiss);
        push_dismiss->setObjectName(QStringLiteral("push_dismiss"));
        push_dismiss->setGeometry(QRect(150, 180, 181, 61));
        label = new QLabel(Dismiss);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 100, 282, 13));
        label->setStyleSheet(QStringLiteral("background:color transparent"));
        comboBox = new QComboBox(Dismiss);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(160, 140, 161, 22));
        comboBox->setStyleSheet(QStringLiteral("background:white"));
        label_2 = new QLabel(Dismiss);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 40, 455, 40));
        label_2->setStyleSheet(QStringLiteral("background:color transparent"));
        image = new QLabel(Dismiss);
        image->setObjectName(QStringLiteral("image"));
        image->setGeometry(QRect(50, 30, 41, 31));

        retranslateUi(Dismiss);

        QMetaObject::connectSlotsByName(Dismiss);
    } // setupUi

    void retranslateUi(QWidget *Dismiss)
    {
        Dismiss->setWindowTitle(QApplication::translate("Dismiss", "Form", 0));
        push_dismiss->setText(QApplication::translate("Dismiss", "\320\236\321\204\320\276\321\200\320\274\320\270\321\202\321\214 \321\203\320\262\320\276\320\273\321\214\320\275\320\265\320\275\320\270\320\265", 0));
        label->setText(QApplication::translate("Dismiss", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \321\210\320\270\321\204\321\200, \321\201\320\276\321\202\321\200\321\203\320\264\320\275\320\270\320\272\320\260, \320\272\320\276\321\202\320\276\321\200\320\276\320\263\320\276 \320\275\321\203\320\266\320\275\320\276 \321\203\320\262\320\276\320\273\320\270\321\202\321\214", 0));
        label_2->setText(QApplication::translate("Dismiss", "<html><head/><body><p align=\"center\"><span style=\" font-size:9pt;\">\320\236\320\261\321\200\320\260\321\202\320\270\321\202\320\265 \320\262\320\275\320\270\320\274\320\260\320\275\320\270\320\265, \321\203\320\262\320\276\320\273\320\270\321\202\321\214 \320\263\320\273\320\260\320\262\321\203 \320\276\321\202\320\264\320\265\320\273\320\260 \320\275\320\265\320\273\321\214\320\267\321\217, </span></p><p align=\"center\"><span style=\" font-size:9pt;\">\321\201\320\264\320\265\320\273\320\260\320\271\321\202\320\265 \321\200\320\260\320\261\320\276\321\202\320\275\320\270\320\272\320\260 \320\277\320\276 \320\275\321\203\320\266\320\275\320\276\320\274\321\203 \321\210\320\270\321\204\321\200\321\203 \320\276\320\261\321\213\321\207\320\275\321\213\320\274 \321\200\320\260\320\261\320\276\321\202\320\275\320\270\320\272\320\276\320\274 \320\264\320\273\321\217 \321\203\320\262\320\276\320\273\321\214\320\275\320\265\320\275\320\270\321\217</span></p></body></html>", 0));
        image->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Dismiss: public Ui_Dismiss {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISMISS_H
