#ifndef ADRESSEIPV4_H
#define ADRESSEIPV4_H

#include <QWidget>

class AdresseIPV4 : public QWidget
{
    Q_OBJECT
public:
   AdresseIPV4(quint8 adresse[4], quint8 suffixe);
   int ObtenirAdresseReseau(quint8 adresseReseau[]);
   explicit AdresseIPV4(QWidget *parent = nullptr);
   int ObtenirDerniereAdresse(quint8 derniereAdresse[]);
   int ObtenirAdresseDiffusion(quint8 adresseDiffusion[]);
   void CalculerMasque();
   int ObtenirPremiereAdresse(quint8 premiereAdresse[]);


private:

    quint8 adresse[4];
    quint8 masque[4];
    quint8 suffixe;

};

#endif // ADRESSEIPV4_H
