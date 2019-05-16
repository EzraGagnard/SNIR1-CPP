#include "calculatriceip.h"
#include "ui_calculatriceip.h"
#include <QtMath>
#include <QtGlobal>


CalculatriceIP::CalculatriceIP(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CalculatriceIP)
{
    ui->setupUi(this);
    int suffixe ;
       quint64 nbMaxSousReseau ;
       quint8 masque[4]={0,0,0,0};
       QString leMasque;
       for(suffixe = 0 ; suffixe < 30 ; suffixe++)
       {
           nbMaxSousReseau = static_cast<quint64> (qPow(2, 32-suffixe-1)) ;
           masque[suffixe / 8] += static_cast<quint8>  (qPow(2,(7-(suffixe % 8)))) ;
           leMasque.clear();
           for(int indice = 0 ; indice < 4; indice++)
           {
               leMasque = leMasque + QString::number(masque[indice]);
               if(indice < 3){
                   leMasque = leMasque + ".";
              }
           }

ui->comboBox_Masque->addItem(leMasque);
ui->comboBox_Suffixe->addItem(QString::number(suffixe));
ui->comboBox_SousReseau->addItem(QString::number(nbMaxSousReseau));
ui->comboBox_AdresseIp->addItem(QString::number(nbMaxSousReseau-2));
       }
      }
