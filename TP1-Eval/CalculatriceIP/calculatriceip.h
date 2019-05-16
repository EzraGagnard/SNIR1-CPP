#ifndef CALCULATRICEIP_H
#define CALCULATRICEIP_H

#include <QMainWindow>

namespace Ui {
class CalculatriceIP;
}

class CalculatriceIP : public QMainWindow
{
    Q_OBJECT

public:
    explicit CalculatriceIP(QWidget *parent = 0);
    ~CalculatriceIP();

private:
    Ui::CalculatriceIP *ui;
};

#endif // CALCULATRICEIP_H
