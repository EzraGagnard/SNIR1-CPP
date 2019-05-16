#include "clavier.h"
#include "ui_clavier.h"
#include <QMessageBox>
#include <QTimer>

Clavier::Clavier(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Clavier),
  leDetecteur(nullptr)
{
    ui->setupUi(this);
    connect(ui->pushButton_0,&QPushButton::clicked,this,&Clavier::TraiterChiffre);
    connect(&timerLed,&QTimer::timeout,this,&Clavier::onTimerLed_timeout);

//    connect(ui->pushButton1,&QPushButton::clicked,this,&Clavier::TraiterChiffre);
//    connect(ui->pushButton1_2,&QPushButton::clicked,this,&Clavier::TraiterChiffre);
//    connect(ui->pushButton1_3,&QPushButton::clicked,this,&Clavier::TraiterChiffre);
//    connect(ui->pushButton1_4,&QPushButton::clicked,this,&Clavier::TraiterChiffre);
//    connect(ui->pushButton1_5,&QPushButton::clicked,this,&Clavier::TraiterChiffre);
//    connect(ui->pushButton1_6,&QPushButton::clicked,this,&Clavier::TraiterChiffre);
//    connect(ui->pushButton1_7,&QPushButton::clicked,this,&Clavier::TraiterChiffre);
//    connect(ui->pushButton1_8,&QPushButton::clicked,this,&Clavier::TraiterChiffre);
//    connect(ui->pushButton1_9,&QPushButton::clicked,this,&Clavier::TraiterChiffre);


}

Clavier::~Clavier()
{
    delete ui;
}

void Clavier::on_pushButtonMarche_clicked()
{
//    QString texteBouton = ui->pushButtonMarche->text();
//QMessageBox messageMarche;
//messageMarche.setText("J'ai appuyé sur la touche " + texteBouton);
//messageMarche.exec();
    ui->checkBoxLedRouge->setCheckState(Qt::Checked);
    timerLed.start(500);
}

void Clavier::on_pushButtonArret_clicked()
{
//    QString texteBouton = ui->pushButtonArret->text();
//QMessageBox messageArret;
//messageArret.setText("J'ai appuyé sur la touche " + texteBouton);
//messageArret.exec();
    ui->checkBoxLedRouge->setCheckState(Qt::Unchecked);
     timerLed.stop();

}

void Clavier::TraiterChiffre()
{
    QPushButton *pbouton = (QPushButton *)sender();
        QString texteBouton = pbouton->text();
        QMessageBox messageChiffre;
        messageChiffre.setText("j'ai appuyé sur la touche " + texteBouton);
        messageChiffre.exec();
}

void Clavier::onTimerLed_timeout()
{
    if(ui->checkBoxLedRouge->checkState() == Qt::Checked) {
        ui->checkBoxLedRouge->setCheckState(Qt::Unchecked);
    }else {
        ui->checkBoxLedRouge->setCheckState(Qt::Checked);
    }
}

void Clavier::on_pushButton1_2_clicked()
{
    if(leDetecteur == nullptr){
    leDetecteur = new Detecteur;
    }
    leDetecteur->show();
}



void Clavier::on_pushButton1_3_clicked()
{
   if(leDetecteur != nullptr){
    leDetecteur->hide();
      delete leDetecteur;
    }
}

void Clavier::on_pushButton1_4_clicked()
{
   leDetecteurTemporise = new DetecteurTemporise;
leDetecteurTemporise->show();

}
