#include <QDebug>
#include "centraledalarme.h"
#include "clavier.h"

CentraleDalarme::CentraleDalarme(QObject *parent) :
    QObject(parent),
    indiceCourant(0)
{
    for(int i = 0 ; i < TAILLE_CODE ; i++)
        combinaison[i]=0;

    leClavier = new Clavier(this);
    leClavier->show();
}

CentraleDalarme::~CentraleDalarme()
{
    delete leClavier;
}

void CentraleDalarme::FabriquerCode(const qint8 chiffre)
{
    // Code à compléter
    //  QDebug() << chiffre;
    if(indiceCourant<TAILLE_CODE){
        combinaison[indiceCourant]= chiffre ;
        indiceCourant++;
    }else{
        for (int n=0;n<TAILLE_CODE-1;n++){
            combinaison[n]=combinaison[n+1];
        }
    }

    // Affichage de la combinaison lors de sa construction
        for(int i = 0 ; i < TAILLE_CODE; i++)
        qDebug() << combinaison[i];
        qDebug() << "-";
}
