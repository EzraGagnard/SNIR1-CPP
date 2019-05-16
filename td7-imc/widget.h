#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void on_pushButton_Quitter_clicked();

    void on_pushButton_clicked();

private:
    Ui::Widget *ui;
    void AfficherInfos();
    double poids;
    double taille;
    QString nom;
    QString prenom;
    int age;
    static const int NB_IMC = 6 ;
    static const int NB_CORPULENCE = 7 ;
};

#endif // WIDGET_H
