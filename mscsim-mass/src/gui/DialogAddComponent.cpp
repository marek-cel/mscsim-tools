#include "DialogAddComponent.h"
#include "ui_DialogAddComponent.h"

DialogAddComponent::DialogAddComponent(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogAddComponent)
{
    ui->setupUi(this);
}

DialogAddComponent::~DialogAddComponent()
{
    delete ui;
}
