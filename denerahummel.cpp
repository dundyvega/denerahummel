#include "denerahummel.h"
#include "ui_denerahummel.h"

DeneraHummel::DeneraHummel(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DeneraHummel)
{
    ui->setupUi(this);
}

DeneraHummel::~DeneraHummel()
{
    delete ui;
}
