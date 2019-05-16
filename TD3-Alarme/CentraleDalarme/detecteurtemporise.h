#ifndef DETECTEURTEMPORISE_H
#define DETECTEURTEMPORISE_H

#include <QDialog>
#include <QTimer>
namespace Ui {
class DetecteurTemporise;
}

class DetecteurTemporise : public QDialog
{
    Q_OBJECT

public:
    explicit DetecteurTemporise(QWidget *parent = 0);
    ~DetecteurTemporise();

private slots:
    void on_pushButton_clicked();
    void onTempo_timeout();

private:
    Ui::DetecteurTemporise *ui;
     QTimer Tempo;
};

#endif // DETECTEURTEMPORISE_H
