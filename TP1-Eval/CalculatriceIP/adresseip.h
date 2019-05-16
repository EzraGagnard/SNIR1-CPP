#ifndef ADRESSEIP_H
#define ADRESSEIP_H
#include <QWidget>

class adresseip : public QWidget
{
public:
    adresseip();
};

#endif // ADRESSEIP_H



{
    Q_OBJECT
public:
    explicit Adresseip(QWidget *parent = nullptr);
    AdresseIPV4(quint8 adresse[4], quint8 suffixe);
   int ObtenirAdresseReseau(quint8 adresseReseau[]);
   int ObtenirPremiereAdresse(quint8 premiereAdresse[]);
   int ObtenirDerniereAdresse(quint8 derniereAdresse[]);
    int ObtenirAdresseDiffusion(quint8 adresseDiffusion[]);
    void CalculerMasque();

private:

    quint8 adresse[4];
    quint8 masque[4];
    quint8 suffixe;

};

#endif // ADRESSEIPV4_H
