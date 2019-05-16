#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_Quitter_clicked()
{
    close();
}

void Widget::AfficherInfos()
{
    double imcs[NB_IMC] = {16.5, 18.5, 25, 30, 35, 40};
    QString corpulences[NB_CORPULENCE] = {"Famine", "Maigreur", "Normale", "Surpoids", "Obésité modérée", "Obésité sévère", "Obésité morbide"};
    double imc=0;
    // initialisation de poids, taille, âge, nom et prenom
poids = ui->doubleSpinBox_Poids->value();
taille= ui->doubleSpinBox_Taille->value();
age = ui->spinBox_Age->value();
nom = ui->lineEdit_Nom->text();
prenom = ui->lineEdit_Prenom->text();


// affichage message de bienvenue
  ui->textEditAfficheur->clear();
  ui->textEditAfficheur->append("Bonjour, " + prenom + " " + nom) ;

    // calcul de l'imc
    // affichage de l'imc
    ui->textEditAfficheur->append("Votre indice de masse corporel est de : "+QString::number(imc));
    int indiceCorpulence = 0;
    for (int i = 0; i < NB_IMC - 1; i++) {
        if (imc > imcs[i] && imc <= imcs[i + 1]) {
            indiceCorpulence = i + 1;
        }
    }
    // cas extreme
    if (imc < 16.5) {
        indiceCorpulence = 0;
    }
    if (imc > 40) {
       indiceCorpulence = NB_CORPULENCE - 1;
    }
    // affichage de la corpulence: corpulences[indiceCorpulence]
}


void Widget::on_pushButton_clicked()
{
    ui->tabWidget->setCurrentIndex(1);
    AfficherInfos();
}
