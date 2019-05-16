#include "detecteur.h"
#include "ui_detecteur.h"
#include <QMessageBox>
Detecteur::Detecteur(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Detecteur)
{
    ui->setupUi(this);
    setWindowTitle("Détecteur");

}

Detecteur::~Detecteur()
{
    delete ui;
}

void Detecteur::on_pushButton_clicked()
{
    QMessageBox message(QMessageBox::Warning,"INTRUS DETECTE", //nom de la fenetre
                        "Il y a un intrus"); //message en question
    message.exec();
}
