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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Output
{
public:
    QTreeWidget *treeWidget;
    QLabel *label;
    QPushButton *push_close;

    void setupUi(QWidget *Output)
    {
        if (Output->objectName().isEmpty())
            Output->setObjectName(QStringLiteral("Output"));
        Output->resize(865, 479);
        Output->setStyleSheet(QStringLiteral("background:rgb(230, 255, 255)"));
        treeWidget = new QTreeWidget(Output);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setGeometry(QRect(10, 70, 841, 341));
        treeWidget->setStyleSheet(QStringLiteral("background:white"));
        treeWidget->setDragEnabled(false);
        treeWidget->setAnimated(true);
        treeWidget->setColumnCount(7);
        treeWidget->header()->setVisible(true);
        treeWidget->header()->setCascadingSectionResizes(false);
        label = new QLabel(Output);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(330, 30, 211, 23));
        QFont font;
        font.setPointSize(10);
        label->setFont(font);
        push_close = new QPushButton(Output);
        push_close->setObjectName(QStringLiteral("push_close"));
        push_close->setGeometry(QRect(300, 420, 271, 31));
        push_close->setFont(font);

        retranslateUi(Output);

        QMetaObject::connectSlotsByName(Output);
    } // setupUi

    void retranslateUi(QWidget *Output)
    {
        Output->setWindowTitle(QApplication::translate("Output", "HRD ver 1.0", 0));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(6, QApplication::translate("Output", "\321\200\321\203\320\272\320\276\320\262\320\276\320\264\320\270\320\274\320\276\320\265 \320\277\320\276\320\264\321\200\320\260\320\267\320\264\320\265\320\273\320\265\320\275\320\270\320\265(\320\265\321\201\320\273\320\270 \320\265\321\201\321\202\321\214)", 0));
        ___qtreewidgetitem->setText(5, QApplication::translate("Output", "\320\267\320\260\321\200\320\277\320\273\320\260\321\202\320\260", 0));
        ___qtreewidgetitem->setText(4, QApplication::translate("Output", "\320\264\320\276\320\273\320\266\320\275\320\276\321\201\321\202\321\214", 0));
        ___qtreewidgetitem->setText(3, QApplication::translate("Output", "\320\276\320\261\321\200\320\260\320\267\320\276\320\262\320\260\320\275\320\270\320\265", 0));
        ___qtreewidgetitem->setText(2, QApplication::translate("Output", "\320\263\320\276\320\264 \321\200\320\276\320\266\320\264\320\265\320\275\320\270\321\217", 0));
        ___qtreewidgetitem->setText(1, QApplication::translate("Output", "\320\270\320\274\321\217", 0));
        ___qtreewidgetitem->setText(0, QApplication::translate("Output", "\321\210\320\270\321\204\321\200", 0));
        label->setText(QApplication::translate("Output", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-style:italic;\">\320\241\321\202\321\200\321\203\320\272\321\202\321\203\321\200\320\260 \320\277\321\200\320\265\320\264\320\277\321\200\320\270\321\217\321\202\320\270\321\217</span></p></body></html>", 0));
        push_close->setText(QApplication::translate("Output", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214 \320\276\320\272\320\275\320\276", 0));
    } // retranslateUi

};

namespace Ui {
    class Output: public Ui_Output {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OUTPUT_H
