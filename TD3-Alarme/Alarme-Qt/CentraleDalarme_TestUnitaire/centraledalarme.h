#ifndef CENTRALEDALARME_H
#define CENTRALEDALARME_H

#include <QObject>

class Clavier;

#define TAILLE_CODE 4

class CentraleDalarme : public QObject
{
    Q_OBJECT
public:
    explicit CentraleDalarme(QObject *parent = nullptr);
    ~CentraleDalarme();
    void FabriquerCode(const qint8 chiffre);

signals:

public slots:
private:
    quint8 combinaison[TAILLE_CODE];
    int indiceCourant;
    Clavier *leClavier;
};

#endif // CENTRALEDALARME_H
