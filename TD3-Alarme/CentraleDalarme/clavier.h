#ifndef CLAVIER_H
#define CLAVIER_H

#include <QMainWindow>
#include <QMessageBox>
#include <QTimer>
#include "detecteur.h"
#include "detecteurtemporise.h"

namespace Ui {
class Clavier;
}

class Clavier : public QMainWindow
{
    Q_OBJECT

public:
    explicit Clavier(QWidget *parent = 0);
    ~Clavier();

private slots:


    void on_pushButtonMarche_clicked();
    void on_pushButtonArret_clicked();
    void TraiterChiffre();
    void onTimerLed_timeout();
    void on_pushButton1_2_clicked();
    void on_pushButton1_3_clicked();


    void on_pushButton1_4_clicked();

private:
    Ui::Clavier *ui;
    QTimer timerLed;
    Detecteur *leDetecteur;
DetecteurTemporise *leDetecteurTemporise ;
};

#endif // CLAVIER_H
