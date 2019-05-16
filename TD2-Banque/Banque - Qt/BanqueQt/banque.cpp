#include "banque.h"
#include "ui_banque.h"


Banque::Banque(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Banque)
{
    ui->setupUi(this);
    ui->lineEditSolde->setText(QString::number(compte.ObtenirSolde()));
    ui->lineEditSoldeEpargne->setText(QString::number(compteEpargne.ObtenirSolde()));
    ui->doubleSpinBoxTaux->setValue(5);
    ui->spinBoxDecouvert->setValue(20);
}

Banque::~Banque()
{
    delete ui;
}

void Banque::on_pushButtonDeposer_clicked()
{

double montant = ui->lineEditMontant->text().toDouble();
compte.Deposer(montant);
ui->lineEditSolde->setText(QString::number(compte.ObtenirSolde()));
if(montant == 0){

}else{

//Solde dans historique
QDateTime dateTime = QDateTime::currentDateTime();
QString texte = "Courant: + " + QString::number(montant) + " € ";
texte += dateTime.toString("ddd d MMMM yyyy hh:mm");
// changer couleur
QListWidgetItem *item = new QListWidgetItem(texte);
item->setForeground(Qt::green);
//Ajouter l'item dans la fenetre
 ui->listWidgetHistorique->addItem(item);
}
}

void Banque::on_pushButtonRetirer_clicked()
{
    double montant = ui->lineEditMontant->text().toDouble();
    if(!compte.Retirer(montant)){
        QMessageBox message(QMessageBox::Warning,"Alerte de la banque", //nom de la fenetre
                            "Votre solde est insuffisant"); //message en question
message.exec();
    }else {
        if(montant == 0){

        }else{
            ui->lineEditSolde->setText(QString::number(compte.ObtenirSolde()));
            //Solde dans historique
            QDateTime dateTime = QDateTime::currentDateTime();
            QString texte = "Courant: - " + QString::number(montant) + " € ";
            texte += dateTime.toString("ddd d MMMM yyyy hh:mm");
            // changer couleur
            QListWidgetItem *item = new QListWidgetItem(texte);
            item->setForeground(Qt::red);
            //Ajouter l'item dans la fenetre
             ui->listWidgetHistorique->addItem(item);

        }


    }
}

void Banque::on_pushButtonChangerDecouvert_clicked()
{
    double _nouveauDecouvert = ui->spinBoxDecouvert->text().toDouble();
    compte.ChangerDecouvert(_nouveauDecouvert);
    //Solde dans historique
    QDateTime dateTime = QDateTime::currentDateTime();
    QString texte = "Nouveau découvert de " + QString::number(_nouveauDecouvert) + " € ";

    // changer couleur
    QListWidgetItem *item = new QListWidgetItem(texte);
    item->setForeground(Qt::blue);
    //Ajouter l'item dans la fenetre
    ui->listWidgetHistorique->addItem(item);
}

void Banque::on_pushButtonRetirerEpargne_clicked()
{
    double montant = ui->lineEditMontantEpargne->text().toDouble();
    if(!compteEpargne.Retirer(montant)){
        QMessageBox message(QMessageBox::Warning,"Alerte de la banque", //nom de la fenetre
                            "Votre solde est insuffisant"); //message en question
message.exec();
    }else {
        if(montant == 0){

        }else{
            ui->lineEditSoldeEpargne->setText(QString::number(compteEpargne.ObtenirSolde()));
            //Solde dans historique
            QDateTime dateTime = QDateTime::currentDateTime();
            QString texte = "Epargne: - " + QString::number(montant) + " € ";
            texte += dateTime.toString("ddd d MMMM yyyy hh:mm");
            // changer couleur
            QListWidgetItem *item = new QListWidgetItem(texte);
            item->setForeground(Qt::red);
            //Ajouter l'item dans la fenetre
             ui->listWidgetHistorique->addItem(item);

        }


    }
}
void Banque::on_pushButtonDeposerEpargne_clicked(){
    double montant = ui->lineEditMontantEpargne->text().toDouble();
    compteEpargne.Deposer(montant);
    ui->lineEditSoldeEpargne->setText(QString::number(compteEpargne.ObtenirSolde()));
    if(montant == 0){

    }else{

    //Solde dans historique
    QDateTime dateTime = QDateTime::currentDateTime();
    QString texte = "Epargne: + " + QString::number(montant) + " € ";
    texte += dateTime.toString("ddd d MMMM yyyy hh:mm");
    // changer couleur
    QListWidgetItem *item = new QListWidgetItem(texte);
    item->setForeground(Qt::green);
    //Ajouter l'item dans la fenetre
     ui->listWidgetHistorique->addItem(item);
    }
}



void Banque::on_pushButtonNvTaux_clicked()
{
    double taux = ui ->doubleSpinBoxTaux->text().toDouble();
    compteEpargne.ChangerTaux(taux);
}


void Banque::on_pushButtonCrediterInteret_clicked()
{
    double interets = ui->doubleSpinBoxTaux->text().toDouble();
    compteEpargne.CalculerInterets();
    ui->lineEditSoldeEpargne->setText(QString::number(compteEpargne.ObtenirSolde()));
    double montant=ui->lineEditSoldeEpargne->text().toDouble();
    QDateTime dateTime=QDateTime::currentDateTime();
    QString texte1 = "Interet Epargne: + " + QString::number(interets) + " € ";
    texte1 += dateTime.toString("ddd d MMMM yyyy hh:mm");
    // changer couleur
    QListWidgetItem *item = new QListWidgetItem(texte1);
    item->setForeground(Qt::green);
    ui->listWidgetHistorique->addItem(item);

    // SEPARATION DU TURFU

    QString texte2 = "Epargne: + " + QString::number(montant) + " € ";
    texte2 += dateTime.toString("ddd d MMMM yyyy hh:mm");
    // changer couleur
    QListWidgetItem *item2 = new QListWidgetItem(texte2);
    item2->setForeground(Qt::green);
    //Ajouter l'item dans la fenetre
     ui->listWidgetHistorique->addItem(item);

}
