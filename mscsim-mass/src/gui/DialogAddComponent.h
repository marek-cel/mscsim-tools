#ifndef DIALOGADDCOMPONENT_H
#define DIALOGADDCOMPONENT_H

#include <QDialog>

namespace Ui {
class DialogAddComponent;
}

class DialogAddComponent : public QDialog
{
    Q_OBJECT

public:
    explicit DialogAddComponent(QWidget *parent = nullptr);
    ~DialogAddComponent();

private:
    Ui::DialogAddComponent *ui;
};

#endif // DIALOGADDCOMPONENT_H
