/********************************************************************************
** Form generated from reading UI file 'transfer_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSFER_DIALOG_H
#define UI_TRANSFER_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Transfer_dialog
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_choose_chipher;
    QComboBox *combo_chipher_first;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *radio_create_unit;
    QRadioButton *radio_not_create_unit;
    QCheckBox *check_change_type;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_aim_unit;
    QComboBox *combo_aim_unit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_new_unit;
    QLineEdit *line_new_unit;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_new_chief;
    QComboBox *combo_new_chief;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_aim_new_chief;
    QComboBox *combo_aim_new_chief;
    QLabel *label_info;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *Transfer;
    QPushButton *push_cancel;

    void setupUi(QWidget *Transfer_dialog)
    {
        if (Transfer_dialog->objectName().isEmpty())
            Transfer_dialog->setObjectName(QStringLiteral("Transfer_dialog"));
        Transfer_dialog->setEnabled(true);
        Transfer_dialog->resize(616, 284);
        Transfer_dialog->setMinimumSize(QSize(616, 284));
        Transfer_dialog->setMaximumSize(QSize(1100, 600));
        Transfer_dialog->setStyleSheet(QLatin1String("background: url(:/resources/img/unit.png) no-repeat;\n"
"background-size: cover\n"
"\n"
"\n"
""));
        layoutWidget = new QWidget(Transfer_dialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 10, 611, 271));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(2, 2, 2, 2);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_choose_chipher = new QLabel(layoutWidget);
        label_choose_chipher->setObjectName(QStringLiteral("label_choose_chipher"));
        label_choose_chipher->setEnabled(true);
        QFont font;
        font.setPointSize(10);
        label_choose_chipher->setFont(font);
        label_choose_chipher->setStyleSheet(QStringLiteral("background: color transparent"));
        label_choose_chipher->setFrameShape(QFrame::NoFrame);
        label_choose_chipher->setMidLineWidth(0);
        label_choose_chipher->setScaledContents(false);
        label_choose_chipher->setWordWrap(false);
        label_choose_chipher->setOpenExternalLinks(false);

        horizontalLayout->addWidget(label_choose_chipher);

        combo_chipher_first = new QComboBox(layoutWidget);
        combo_chipher_first->setObjectName(QStringLiteral("combo_chipher_first"));
        combo_chipher_first->setMouseTracking(false);
        combo_chipher_first->setToolTipDuration(-1);
        combo_chipher_first->setStyleSheet(QStringLiteral("background:white"));
        combo_chipher_first->setEditable(true);

        horizontalLayout->addWidget(combo_chipher_first);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        radio_create_unit = new QRadioButton(layoutWidget);
        radio_create_unit->setObjectName(QStringLiteral("radio_create_unit"));
        radio_create_unit->setEnabled(true);
        radio_create_unit->setFont(font);
        radio_create_unit->setStyleSheet(QStringLiteral("background: color transparent"));

        horizontalLayout_2->addWidget(radio_create_unit);

        radio_not_create_unit = new QRadioButton(layoutWidget);
        radio_not_create_unit->setObjectName(QStringLiteral("radio_not_create_unit"));
        radio_not_create_unit->setEnabled(true);
        radio_not_create_unit->setFont(font);
        radio_not_create_unit->setStyleSheet(QStringLiteral("background: color transparent"));

        horizontalLayout_2->addWidget(radio_not_create_unit);

        check_change_type = new QCheckBox(layoutWidget);
        check_change_type->setObjectName(QStringLiteral("check_change_type"));
        check_change_type->setFont(font);
        check_change_type->setStyleSheet(QStringLiteral("background: color transparent"));

        horizontalLayout_2->addWidget(check_change_type);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_aim_unit = new QLabel(layoutWidget);
        label_aim_unit->setObjectName(QStringLiteral("label_aim_unit"));
        label_aim_unit->setFont(font);
        label_aim_unit->setStyleSheet(QStringLiteral("background: color transparent"));

        horizontalLayout_3->addWidget(label_aim_unit);

        combo_aim_unit = new QComboBox(layoutWidget);
        combo_aim_unit->setObjectName(QStringLiteral("combo_aim_unit"));
        combo_aim_unit->setFont(font);
        combo_aim_unit->setStyleSheet(QStringLiteral("background:white"));
        combo_aim_unit->setEditable(true);

        horizontalLayout_3->addWidget(combo_aim_unit);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_new_unit = new QLabel(layoutWidget);
        label_new_unit->setObjectName(QStringLiteral("label_new_unit"));
        label_new_unit->setFont(font);
        label_new_unit->setStyleSheet(QStringLiteral("background: color transparent"));

        horizontalLayout_4->addWidget(label_new_unit);

        line_new_unit = new QLineEdit(layoutWidget);
        line_new_unit->setObjectName(QStringLiteral("line_new_unit"));
        line_new_unit->setFont(font);
        line_new_unit->setStyleSheet(QStringLiteral("background:white"));

        horizontalLayout_4->addWidget(line_new_unit);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_new_chief = new QLabel(layoutWidget);
        label_new_chief->setObjectName(QStringLiteral("label_new_chief"));
        label_new_chief->setFont(font);
        label_new_chief->setStyleSheet(QStringLiteral("background: color transparent"));

        horizontalLayout_5->addWidget(label_new_chief);

        combo_new_chief = new QComboBox(layoutWidget);
        combo_new_chief->setObjectName(QStringLiteral("combo_new_chief"));
        combo_new_chief->setStyleSheet(QStringLiteral("background:white"));
        combo_new_chief->setEditable(true);

        horizontalLayout_5->addWidget(combo_new_chief);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_aim_new_chief = new QLabel(layoutWidget);
        label_aim_new_chief->setObjectName(QStringLiteral("label_aim_new_chief"));
        label_aim_new_chief->setEnabled(true);
        label_aim_new_chief->setFont(font);
        label_aim_new_chief->setStyleSheet(QStringLiteral("background: color transparent"));

        horizontalLayout_6->addWidget(label_aim_new_chief);

        combo_aim_new_chief = new QComboBox(layoutWidget);
        combo_aim_new_chief->setObjectName(QStringLiteral("combo_aim_new_chief"));
        combo_aim_new_chief->setFont(font);
        combo_aim_new_chief->setStyleSheet(QStringLiteral("background:white"));
        combo_aim_new_chief->setEditable(true);

        horizontalLayout_6->addWidget(combo_aim_new_chief);


        verticalLayout->addLayout(horizontalLayout_6);

        label_info = new QLabel(layoutWidget);
        label_info->setObjectName(QStringLiteral("label_info"));
        label_info->setEnabled(true);
        label_info->setFont(font);
        label_info->setAutoFillBackground(false);
        label_info->setStyleSheet(QStringLiteral("background:white"));
        label_info->setFrameShape(QFrame::Panel);
        label_info->setFrameShadow(QFrame::Plain);
        label_info->setTextFormat(Qt::AutoText);

        verticalLayout->addWidget(label_info);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        Transfer = new QPushButton(layoutWidget);
        Transfer->setObjectName(QStringLiteral("Transfer"));
        Transfer->setEnabled(true);
        Transfer->setFont(font);

        horizontalLayout_7->addWidget(Transfer);

        push_cancel = new QPushButton(layoutWidget);
        push_cancel->setObjectName(QStringLiteral("push_cancel"));
        push_cancel->setFont(font);

        horizontalLayout_7->addWidget(push_cancel);


        verticalLayout->addLayout(horizontalLayout_7);


        retranslateUi(Transfer_dialog);

        QMetaObject::connectSlotsByName(Transfer_dialog);
    } // setupUi

    void retranslateUi(QWidget *Transfer_dialog)
    {
        Transfer_dialog->setWindowTitle(QApplication::translate("Transfer_dialog", "HRD ver 1.0", 0));
        label_choose_chipher->setText(QApplication::translate("Transfer_dialog", "<html><head/><body><p align=\"center\">\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \321\210\320\270\321\204\321\200 \321\201\320\276\321\202\321\200\321\203\320\264\320\275\320\270\320\272\320\260, \320\272\320\276\321\202\320\276\321\200\320\276\320\263\320\276 \320\275\321\203\320\266\320\275\320\276 \320\277\320\265\321\200\320\265\320\262\320\265\321\201\321\202\320\270</p></body></html>", 0));
        radio_create_unit->setText(QApplication::translate("Transfer_dialog", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214 \320\276\321\202\320\264\320\265\320\273", 0));
        radio_not_create_unit->setText(QApplication::translate("Transfer_dialog", "\320\235\320\265 \321\201\320\276\320\267\320\264\320\260\320\262\320\260\321\202\321\214 \320\276\321\202\320\264\320\265\320\273", 0));
        check_change_type->setText(QApplication::translate("Transfer_dialog", "\321\201\320\274\320\265\320\275\320\270\321\202\321\214 \321\202\320\270\320\277 (\320\270\320\267 \320\275\320\260\321\207\320\260\320\273\321\214\320\275\320\270\320\272\320\260 \320\262 \320\276\320\261\321\213\321\207\320\275\320\276\320\263\320\276 \320\270\320\273\320\270 \320\275\320\260\320\276\320\261\320\276\321\200\320\276\321\202)", 0));
        label_aim_unit->setText(QApplication::translate("Transfer_dialog", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \320\276\321\202\320\264\320\265\320\273, \320\272\321\203\320\264\320\260 \320\277\320\265\321\200\320\265\320\262\320\265\321\201\321\202\320\270 \320\262\321\213\320\261\321\200\320\260\320\275\320\275\320\276\320\263\320\276 \321\200\320\260\320\261\320\276\321\202\320\275\320\270\320\272\320\260", 0));
        label_new_unit->setText(QApplication::translate("Transfer_dialog", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\275\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\275\320\276\320\262\320\276\320\263\320\276 \320\276\321\202\320\264\320\265\320\273\320\260", 0));
        label_new_chief->setText(QApplication::translate("Transfer_dialog", "<html><head/><body><p>\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \321\210\320\270\321\204\321\200 \320\275\320\276\320\262\320\276\320\263\320\276 \320\275\320\260\321\207\320\260\320\273\321\214\320\275\320\270\320\272\320\260 \320\276\321\202\320\264\320\265\320\273\320\260, \320\263\320\264\320\265 \320\270\320\274 \320\261\321\213\320\273 \320\262\321\213\320\261\321\200\320\260\320\275\320\275\321\213\320\271 \321\200\320\260\320\261\320\276\321\202\320\275\320\270\320\272</p></body></html>", 0));
        label_aim_new_chief->setText(QApplication::translate("Transfer_dialog", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \320\276\321\202\320\264\320\265\320\273, \320\263\320\264\320\265 \320\262\321\213\320\261\321\200\320\260\320\275\320\275\321\213\320\271 \321\200\320\260\320\261\320\276\321\202\320\275\320\270\320\272 \320\261\321\203\320\264\320\265\321\202 \320\275\320\260\321\207\320\260\320\273\321\214\320\275\320\270\320\272\320\276\320\274", 0));
        label_info->setText(QApplication::translate("Transfer_dialog", "\320\230\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217", 0));
        Transfer->setText(QApplication::translate("Transfer_dialog", "\320\236\321\204\320\276\321\200\320\274\320\270\321\202\321\214 \320\277\320\265\321\200\320\265\320\262\320\276\320\264", 0));
        push_cancel->setText(QApplication::translate("Transfer_dialog", "\320\235\320\265\321\205\320\262\320\260\321\202\320\272\320\260 \321\200\320\260\320\261\320\276\321\202\320\275\320\270\320\272\320\276\320\262, \320\276\321\202\320\274\320\265\320\275\320\260", 0));
    } // retranslateUi

};

namespace Ui {
    class Transfer_dialog: public Ui_Transfer_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSFER_DIALOG_H
