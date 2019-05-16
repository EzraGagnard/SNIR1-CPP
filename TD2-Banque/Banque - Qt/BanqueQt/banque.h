#ifndef BANQUE_H
#define BANQUE_H

#include <QWidget>
#include <QMessageBox>
#include <QDateTime>
#include "CompteCourant.h"
#include "CompteEpargne.h"

namespace Ui {
class Banque;
}

class Banque : public QWidget
{
    Q_OBJECT

public:
    explicit Banque(QWidget *parent = 0);
    ~Banque();

private slots:
    void on_pushButtonDeposer_clicked();

    void on_pushButtonRetirer_clicked();

    void on_pushButtonChangerDecouvert_clicked();

    void on_pushButtonDeposerEpargne_clicked();

    void on_pushButtonRetirerEpargne_clicked();

    void on_pushButtonNvTaux_clicked();

    void on_pushButtonCrediterInteret_clicked();

private:
    Ui::Banque *ui;
    CompteCourant compte;
    CompteEpargne compteEpargne;
};

#endif // BANQUE_H
