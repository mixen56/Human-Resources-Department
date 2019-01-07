#ifndef ENTERING_NAME_UNIT_H
#define ENTERING_NAME_UNIT_H

#include <QDialog>

namespace Ui {
class Entering_name_unit;
}

class Entering_name_unit : public QDialog
{
    Q_OBJECT

public:
    explicit Entering_name_unit(QWidget *parent = nullptr);
    ~Entering_name_unit();

private slots:
    void on_set_name_org_clicked();

private:
    Ui::Entering_name_unit *ui;
};

#endif // ENTERING_NAME_UNIT_H
