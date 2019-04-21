#ifndef DENERAHUMMEL_H
#define DENERAHUMMEL_H

#include <QMainWindow>

namespace Ui {
class DeneraHummel;
}

class DeneraHummel : public QMainWindow
{
    Q_OBJECT

public:
    explicit DeneraHummel(QWidget *parent = 0);
    ~DeneraHummel();

private:
    Ui::DeneraHummel *ui;
};

#endif // DENERAHUMMEL_H
