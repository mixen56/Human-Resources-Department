/********************************************************************************
** Form generated from reading UI file 'output.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OUTPUT_H
#define UI_OUTPUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Output
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QTreeWidget *treeWidget;
    QPushButton *push_close;

    void setupUi(QWidget *Output)
    {
        if (Output->objectName().isEmpty())
            Output->setObjectName(QStringLiteral("Output"));
        Output->resize(1035, 500);
        Output->setMinimumSize(QSize(1020, 500));
        Output->setMaximumSize(QSize(1500, 700));
        Output->setStyleSheet(QStringLiteral("background:rgb(230, 255, 255)"));
        layoutWidget = new QWidget(Output);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 30, 1012, 471));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(5, 5, 5, 5);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(10);
        label->setFont(font);

        verticalLayout_2->addWidget(label);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        treeWidget = new QTreeWidget(layoutWidget);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setEnabled(true);
        treeWidget->setMinimumSize(QSize(1000, 400));
        treeWidget->setStyleSheet(QStringLiteral("background:white"));
        treeWidget->setDragEnabled(false);
        treeWidget->setAnimated(true);
        treeWidget->setColumnCount(7);
        treeWidget->header()->setVisible(true);
        treeWidget->header()->setCascadingSectionResizes(true);

        verticalLayout->addWidget(treeWidget);

        push_close = new QPushButton(layoutWidget);
        push_close->setObjectName(QStringLiteral("push_close"));
        push_close->setFont(font);

        verticalLayout->addWidget(push_close);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(Output);

        QMetaObject::connectSlotsByName(Output);
    } // setupUi

    void retranslateUi(QWidget *Output)
    {
        Output->setWindowTitle(QApplication::translate("Output", "HRD ver 1.0", 0));
        label->setText(QApplication::translate("Output", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-style:italic;\">\320\241\321\202\321\200\321\203\320\272\321\202\321\203\321\200\320\260 \320\277\321\200\320\265\320\264\320\277\321\200\320\270\321\217\321\202\320\270\321\217</span></p></body></html>", 0));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(6, QApplication::translate("Output", "\321\200\321\203\320\272\320\276\320\262\320\276\320\264\320\270\320\274\320\276\320\265 \320\277\320\276\320\264\321\200\320\260\320\267\320\264\320\265\320\273\320\265\320\275\320\270\320\265(\320\265\321\201\320\273\320\270 \320\265\321\201\321\202\321\214)", 0));
        ___qtreewidgetitem->setText(5, QApplication::translate("Output", "\320\267\320\260\321\200\320\277\320\273\320\260\321\202\320\260", 0));
        ___qtreewidgetitem->setText(4, QApplication::translate("Output", "\320\264\320\276\320\273\320\266\320\275\320\276\321\201\321\202\321\214", 0));
        ___qtreewidgetitem->setText(3, QApplication::translate("Output", "\320\276\320\261\321\200\320\260\320\267\320\276\320\262\320\260\320\275\320\270\320\265", 0));
        ___qtreewidgetitem->setText(2, QApplication::translate("Output", "\320\263\320\276\320\264 \321\200\320\276\320\266\320\264\320\265\320\275\320\270\321\217", 0));
        ___qtreewidgetitem->setText(1, QApplication::translate("Output", "\320\270\320\274\321\217", 0));
        ___qtreewidgetitem->setText(0, QApplication::translate("Output", "\321\210\320\270\321\204\321\200", 0));
        push_close->setText(QApplication::translate("Output", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214 \320\276\320\272\320\275\320\276", 0));
    } // retranslateUi

};

namespace Ui {
    class Output: public Ui_Output {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OUTPUT_H
