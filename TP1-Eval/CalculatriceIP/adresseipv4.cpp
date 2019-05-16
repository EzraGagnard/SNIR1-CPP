#include "adresseipv4.h"
#include <QtGlobal>
#include <QtMath>

AdresseIPV4::AdresseIPV4(QWidget *parent) : QWidget(parent)
{
    quint8 adresse[4];
    quint8 suffixe;

    CalculerMasque();

}

AdresseIPV4::ObtenirAdresseReseau(quint8 adresseReseau[]){
    quint8 adresse[4];
    quint8 masque[4];

    CalculerMasque();
    adresseReseau = adresse & masque;

}

AdresseIPV4::CalculerMasque(){
    quint8 suffixe;
    quint8 masque[4];
    QString unMasque;
    for(suffixe = 0 ; suffixe < 29 ; suffixe++)
    {
    masque[suffixe / 8] += static_cast<quint8> (qPow(2,(7-(suffixe % 8))));
    for (int indice=0;indice<4;indice++)
    {
        unMasque = unMasque + QString::number(masque[indice]);
        if(indice < 3){
            unMasque = unMasque + ".";
       }
    }

}
}
