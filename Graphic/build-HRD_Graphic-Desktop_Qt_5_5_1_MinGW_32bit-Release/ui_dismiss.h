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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dismiss
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *image;
    QLabel *label_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QComboBox *comboBox;
    QPushButton *push_dismiss;

    void setupUi(QWidget *Dismiss)
    {
        if (Dismiss->objectName().isEmpty())
            Dismiss->setObjectName(QStringLiteral("Dismiss"));
        Dismiss->resize(509, 278);
        Dismiss->setMinimumSize(QSize(509, 278));
        Dismiss->setMaximumSize(QSize(1000, 600));
        Dismiss->setStyleSheet(QStringLiteral("background: url(:/resources/img/unit.png) no-repeat;"));
        layoutWidget = new QWidget(Dismiss);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 60, 480, 128));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        image = new QLabel(layoutWidget);
        image->setObjectName(QStringLiteral("image"));

        horizontalLayout->addWidget(image);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QStringLiteral("background:color transparent"));

        horizontalLayout->addWidget(label_2);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QStringLiteral("background:color transparent"));

        verticalLayout->addWidget(label);

        comboBox = new QComboBox(layoutWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setStyleSheet(QStringLiteral("background:white"));

        verticalLayout->addWidget(comboBox);

        push_dismiss = new QPushButton(layoutWidget);
        push_dismiss->setObjectName(QStringLiteral("push_dismiss"));
        QFont font;
        font.setPointSize(10);
        push_dismiss->setFont(font);

        verticalLayout->addWidget(push_dismiss);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(Dismiss);

        QMetaObject::connectSlotsByName(Dismiss);
    } // setupUi

    void retranslateUi(QWidget *Dismiss)
    {
        Dismiss->setWindowTitle(QApplication::translate("Dismiss", "Form", 0));
        image->setText(QString());
        label_2->setText(QApplication::translate("Dismiss", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt;\">\320\236\320\261\321\200\320\260\321\202\320\270\321\202\320\265 \320\262\320\275\320\270\320\274\320\260\320\275\320\270\320\265, \321\203\320\262\320\276\320\273\320\270\321\202\321\214 \320\263\320\273\320\260\320\262\321\203 \320\276\321\202\320\264\320\265\320\273\320\260 \320\275\320\265\320\273\321\214\320\267\321\217, </span></p><p align=\"center\"><span style=\" font-size:10pt;\">\321\201\320\264\320\265\320\273\320\260\320\271\321\202\320\265 \321\200\320\260\320\261\320\276\321\202\320\275\320\270\320\272\320\260 \320\277\320\276 \320\275\321\203\320\266\320\275\320\276\320\274\321\203 \321\210\320\270\321\204\321\200\321\203 \320\276\320\261\321\213\321\207\320\275\321\213\320\274 \321\200\320\260\320\261\320\276\321\202\320\275\320\270\320\272\320\276\320\274 \320\264\320\273\321\217 \321\203\320\262\320\276\320\273\321\214\320\275\320\265\320\275\320\270\321\217</span></p></body></html>", 0));
        label->setText(QApplication::translate("Dismiss", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt;\">\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \321\210\320\270\321\204\321\200, \321\201\320\276\321\202\321\200\321\203\320\264\320\275\320\270\320\272\320\260, \320\272\320\276\321\202\320\276\321\200\320\276\320\263\320\276 \320\275\321\203\320\266\320\275\320\276 \321\203\320\262\320\276\320\273\320\270\321\202\321\214</span></p></body></html>", 0));
        push_dismiss->setText(QApplication::translate("Dismiss", "\320\236\321\204\320\276\321\200\320\274\320\270\321\202\321\214 \321\203\320\262\320\276\320\273\321\214\320\275\320\265\320\275\320\270\320\265", 0));
    } // retranslateUi

};

namespace Ui {
    class Dismiss: public Ui_Dismiss {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISMISS_H
