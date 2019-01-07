#ifndef TRANSFER_DIALOG_H
#define TRANSFER_DIALOG_H

#include <QWidget>
#include "_Unit_.h"
#include "output.h"

namespace Ui {
class Transfer_dialog;
}

class Transfer_dialog : public QWidget
{
    Q_OBJECT

public:
    explicit Transfer_dialog(QWidget *parent = nullptr);
    Transfer_dialog(Unit*);
    ~Transfer_dialog();
    void setptr(Unit* some){unit = some;}
    void setObject(Output * some){mane = some;}
    int get_choos_chipher() {return choos_chipher;}
    void full_combo_box_new_chief(Ui::Transfer_dialog* ui, Unit* unit);

private slots:
    int on_Transfer_clicked();

    //void on_combo_chipher_first_currentTextChanged(const QString &arg1);

    void on_radio_create_unit_clicked();

    void on_radio_not_create_unit_clicked();

    void on_combo_chipher_first_activated(const QString &arg1);

    void on_push_cancel_clicked();

    void on_check_change_type_stateChanged(int arg1);

private:
    Ui::Transfer_dialog *ui;
    Unit* unit;
    Output* mane;
    bool soz, glav, menyat;
    int choos_chipher = -1;
};

#endif // TRANSFER_DIALOG_H
