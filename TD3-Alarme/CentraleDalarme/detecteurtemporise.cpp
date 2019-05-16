#include "detecteurtemporise.h"
#include "ui_detecteurtemporise.h"
#include <QMessageBox>
#include <QTimer>

DetecteurTemporise::DetecteurTemporise(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DetecteurTemporise)
{
    ui->setupUi(this);
    setWindowTitle("Détecteur Temporise");
     connect(&Tempo,&QTimer::timeout,this,&DetecteurTemporise::onTempo_timeout);
}

DetecteurTemporise::~DetecteurTemporise()
{
    delete ui;
}

void DetecteurTemporise::on_pushButton_clicked()
{
    Tempo.start(3000);

}

void DetecteurTemporise::onTempo_timeout()
{
    QMessageBox message(QMessageBox::Warning,"INTRUS DETECTE", //nom de la fenetre
                        "Il y a un intrus"); //message en question
    message.exec();
    Tempo.stop();
}
