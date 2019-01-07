/********************************************************************************
** Form generated from reading UI file 'createnewunit_ask.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATENEWUNIT_ASK_H
#define UI_CREATENEWUNIT_ASK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreateNewUnit_Ask
{
public:
    QLabel *emrg_old_unit;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *enter_unit_where;
    QComboBox *combo_old_unit;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *enter_name_worker;
    QLineEdit *line_name;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSpinBox *spin_year;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *line_post;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLineEdit *line_educ;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QSpinBox *spin_salary;
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *create_unit;
    QHBoxLayout *horizontalLayout_7;
    QLabel *new_unit;
    QLineEdit *line_new_unit;
    QRadioButton *not_create_unit;
    QLabel *label_emrg_create;
    QPushButton *add_worker;

    void setupUi(QWidget *CreateNewUnit_Ask)
    {
        if (CreateNewUnit_Ask->objectName().isEmpty())
            CreateNewUnit_Ask->setObjectName(QStringLiteral("CreateNewUnit_Ask"));
        CreateNewUnit_Ask->resize(593, 305);
        CreateNewUnit_Ask->setMinimumSize(QSize(593, 300));
        CreateNewUnit_Ask->setMaximumSize(QSize(593, 305));
        CreateNewUnit_Ask->setStyleSheet(QLatin1String("background:url(:resources/img/unit.png);\n"
"background-size: cover;"));
        emrg_old_unit = new QLabel(CreateNewUnit_Ask);
        emrg_old_unit->setObjectName(QStringLiteral("emrg_old_unit"));
        emrg_old_unit->setGeometry(QRect(610, 40, 47, 13));
        layoutWidget = new QWidget(CreateNewUnit_Ask);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 591, 301));
        verticalLayout_5 = new QVBoxLayout(layoutWidget);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        enter_unit_where = new QLabel(layoutWidget);
        enter_unit_where->setObjectName(QStringLiteral("enter_unit_where"));
        QFont font;
        font.setPointSize(10);
        enter_unit_where->setFont(font);
        enter_unit_where->setStyleSheet(QStringLiteral("background:transparent"));

        horizontalLayout_6->addWidget(enter_unit_where);

        combo_old_unit = new QComboBox(layoutWidget);
        combo_old_unit->setObjectName(QStringLiteral("combo_old_unit"));
        combo_old_unit->setStyleSheet(QStringLiteral("background:white"));

        horizontalLayout_6->addWidget(combo_old_unit);


        verticalLayout_2->addLayout(horizontalLayout_6);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        enter_name_worker = new QLabel(layoutWidget);
        enter_name_worker->setObjectName(QStringLiteral("enter_name_worker"));
        enter_name_worker->setFont(font);
        enter_name_worker->setStyleSheet(QStringLiteral("background:transparent"));

        horizontalLayout->addWidget(enter_name_worker);

        line_name = new QLineEdit(layoutWidget);
        line_name->setObjectName(QStringLiteral("line_name"));
        line_name->setStyleSheet(QStringLiteral("background:white"));

        horizontalLayout->addWidget(line_name);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("background:transparent"));

        horizontalLayout_2->addWidget(label);

        spin_year = new QSpinBox(layoutWidget);
        spin_year->setObjectName(QStringLiteral("spin_year"));
        spin_year->setStyleSheet(QStringLiteral("background:white"));
        spin_year->setMinimum(1800);
        spin_year->setMaximum(2019);

        horizontalLayout_2->addWidget(spin_year);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);
        label_2->setStyleSheet(QStringLiteral("background:transparent"));

        horizontalLayout_3->addWidget(label_2);

        line_post = new QLineEdit(layoutWidget);
        line_post->setObjectName(QStringLiteral("line_post"));
        line_post->setStyleSheet(QStringLiteral("background:white"));

        horizontalLayout_3->addWidget(line_post);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);
        label_3->setStyleSheet(QStringLiteral("background:transparent"));

        horizontalLayout_4->addWidget(label_3);

        line_educ = new QLineEdit(layoutWidget);
        line_educ->setObjectName(QStringLiteral("line_educ"));
        line_educ->setStyleSheet(QStringLiteral("background:white"));

        horizontalLayout_4->addWidget(line_educ);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);
        label_4->setStyleSheet(QStringLiteral("background:transparent"));

        horizontalLayout_5->addWidget(label_4);

        spin_salary = new QSpinBox(layoutWidget);
        spin_salary->setObjectName(QStringLiteral("spin_salary"));
        spin_salary->setStyleSheet(QStringLiteral("background:white"));
        spin_salary->setMaximum(1000000);

        horizontalLayout_5->addWidget(spin_salary);


        verticalLayout->addLayout(horizontalLayout_5);


        verticalLayout_2->addLayout(verticalLayout);


        verticalLayout_4->addLayout(verticalLayout_2);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        create_unit = new QRadioButton(layoutWidget);
        create_unit->setObjectName(QStringLiteral("create_unit"));
        create_unit->setFont(font);
        create_unit->setStyleSheet(QStringLiteral("background:transparent"));

        verticalLayout_3->addWidget(create_unit);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        new_unit = new QLabel(layoutWidget);
        new_unit->setObjectName(QStringLiteral("new_unit"));
        new_unit->setFont(font);
        new_unit->setStyleSheet(QStringLiteral("background:transparent"));

        horizontalLayout_7->addWidget(new_unit);

        line_new_unit = new QLineEdit(layoutWidget);
        line_new_unit->setObjectName(QStringLiteral("line_new_unit"));
        line_new_unit->setStyleSheet(QStringLiteral("background:white"));

        horizontalLayout_7->addWidget(line_new_unit);


        verticalLayout_3->addLayout(horizontalLayout_7);


        horizontalLayout_8->addLayout(verticalLayout_3);

        not_create_unit = new QRadioButton(layoutWidget);
        not_create_unit->setObjectName(QStringLiteral("not_create_unit"));
        not_create_unit->setFont(font);
        not_create_unit->setStyleSheet(QStringLiteral("background:transparent"));

        horizontalLayout_8->addWidget(not_create_unit);


        verticalLayout_4->addLayout(horizontalLayout_8);


        verticalLayout_5->addLayout(verticalLayout_4);

        label_emrg_create = new QLabel(layoutWidget);
        label_emrg_create->setObjectName(QStringLiteral("label_emrg_create"));
        label_emrg_create->setFont(font);
        label_emrg_create->setStyleSheet(QStringLiteral("background:transparent"));

        verticalLayout_5->addWidget(label_emrg_create);

        add_worker = new QPushButton(layoutWidget);
        add_worker->setObjectName(QStringLiteral("add_worker"));
        QFont font1;
        font1.setPointSize(12);
        add_worker->setFont(font1);

        verticalLayout_5->addWidget(add_worker);


        retranslateUi(CreateNewUnit_Ask);

        QMetaObject::connectSlotsByName(CreateNewUnit_Ask);
    } // setupUi

    void retranslateUi(QWidget *CreateNewUnit_Ask)
    {
        CreateNewUnit_Ask->setWindowTitle(QApplication::translate("CreateNewUnit_Ask", "HRD ver 1.0", 0));
        emrg_old_unit->setText(QString());
        enter_unit_where->setText(QApplication::translate("CreateNewUnit_Ask", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\276\321\202\320\264\320\265\320\273, \320\262 \320\272\320\276\321\202\320\276\321\200\321\213\320\271 \320\264\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\200\320\260\320\261\320\276\321\202\320\275\320\270\320\272\320\260", 0));
        enter_name_worker->setText(QApplication::translate("CreateNewUnit_Ask", "\320\230\320\274\321\217 \321\200\320\260\320\261\320\276\321\202\320\275\320\270\320\272\320\260", 0));
        label->setText(QApplication::translate("CreateNewUnit_Ask", "\320\223\320\276\320\264 \321\200\320\276\320\266\320\264\320\265\320\275\320\270\321\217", 0));
        label_2->setText(QApplication::translate("CreateNewUnit_Ask", "\320\224\320\276\320\273\320\266\320\275\320\276\321\201\321\202\321\214", 0));
        label_3->setText(QApplication::translate("CreateNewUnit_Ask", "\320\236\320\261\321\200\320\260\320\267\320\276\320\262\320\260\320\275\320\270\320\265", 0));
        label_4->setText(QApplication::translate("CreateNewUnit_Ask", "\320\227\320\260\321\200\320\277\320\273\320\260\321\202\320\260", 0));
        create_unit->setText(QApplication::translate("CreateNewUnit_Ask", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214 \320\275\320\276\320\262\321\213\320\271 \320\276\321\202\320\264\320\265\320\273", 0));
        new_unit->setText(QApplication::translate("CreateNewUnit_Ask", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\275\320\276\320\262\320\276\320\263\320\276 \320\276\321\202\320\264\320\265\320\273\320\260", 0));
        not_create_unit->setText(QApplication::translate("CreateNewUnit_Ask", "\320\235\320\265 \321\201\320\276\320\267\320\264\320\260\320\262\320\260\321\202\321\214\n"
" \320\275\320\276\320\262\321\213\320\271 \320\276\321\202\320\264\320\265\320\273", 0));
        label_emrg_create->setText(QString());
        add_worker->setText(QApplication::translate("CreateNewUnit_Ask", "\320\276\321\204\320\276\321\200\320\274\320\270\321\202\321\214 \320\275\320\260\320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\265", 0));
    } // retranslateUi

};

namespace Ui {
    class CreateNewUnit_Ask: public Ui_CreateNewUnit_Ask {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATENEWUNIT_ASK_H
