/********************************************************************************
** Form generated from reading UI file 'banque.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BANQUE_H
#define UI_BANQUE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Banque
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineEditMontant;
    QPushButton *pushButtonDeposer;
    QPushButton *pushButtonRetirer;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEditSolde;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QListWidget *listWidgetHistorique;
    QPushButton *pushButtonQuitter;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_4;
    QSpinBox *spinBoxDecouvert;
    QPushButton *pushButtonChangerDecouvert;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QLineEdit *lineEditSoldeEpargne;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_6;
    QLineEdit *lineEditMontantEpargne;
    QPushButton *pushButtonDeposerEpargne;
    QPushButton *pushButtonRetirerEpargne;
    QWidget *verticalLayoutWidget_5;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_7;
    QDoubleSpinBox *doubleSpinBoxTaux;
    QPushButton *pushButtonNvTaux;
    QPushButton *pushButtonCrediterInteret;

    void setupUi(QWidget *Banque)
    {
        if (Banque->objectName().isEmpty())
            Banque->setObjectName(QStringLiteral("Banque"));
        Banque->setEnabled(true);
        Banque->setMinimumSize(QSize(0, 0));
        Banque->setMaximumSize(QSize(16777215, 16777215));
        Banque->setCursor(QCursor(Qt::ArrowCursor));
        Banque->setLayoutDirection(Qt::LeftToRight);
        Banque->setAutoFillBackground(false);
        verticalLayoutWidget = new QWidget(Banque);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 80, 131, 112));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        lineEditMontant = new QLineEdit(verticalLayoutWidget);
        lineEditMontant->setObjectName(QStringLiteral("lineEditMontant"));

        verticalLayout->addWidget(lineEditMontant);

        pushButtonDeposer = new QPushButton(verticalLayoutWidget);
        pushButtonDeposer->setObjectName(QStringLiteral("pushButtonDeposer"));

        verticalLayout->addWidget(pushButtonDeposer);

        pushButtonRetirer = new QPushButton(verticalLayoutWidget);
        pushButtonRetirer->setObjectName(QStringLiteral("pushButtonRetirer"));

        verticalLayout->addWidget(pushButtonRetirer);

        horizontalLayoutWidget = new QWidget(Banque);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(20, 10, 251, 51));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        lineEditSolde = new QLineEdit(horizontalLayoutWidget);
        lineEditSolde->setObjectName(QStringLiteral("lineEditSolde"));

        horizontalLayout->addWidget(lineEditSolde);

        verticalLayoutWidget_2 = new QWidget(Banque);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(160, 80, 231, 191));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(verticalLayoutWidget_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_2->addWidget(label_3);

        listWidgetHistorique = new QListWidget(verticalLayoutWidget_2);
        listWidgetHistorique->setObjectName(QStringLiteral("listWidgetHistorique"));

        verticalLayout_2->addWidget(listWidgetHistorique);

        pushButtonQuitter = new QPushButton(Banque);
        pushButtonQuitter->setObjectName(QStringLiteral("pushButtonQuitter"));
        pushButtonQuitter->setGeometry(QRect(210, 280, 131, 25));
        verticalLayoutWidget_3 = new QWidget(Banque);
        verticalLayoutWidget_3->setObjectName(QStringLiteral("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(20, 200, 131, 82));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(verticalLayoutWidget_3);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_3->addWidget(label_4);

        spinBoxDecouvert = new QSpinBox(verticalLayoutWidget_3);
        spinBoxDecouvert->setObjectName(QStringLiteral("spinBoxDecouvert"));

        verticalLayout_3->addWidget(spinBoxDecouvert);

        pushButtonChangerDecouvert = new QPushButton(verticalLayoutWidget_3);
        pushButtonChangerDecouvert->setObjectName(QStringLiteral("pushButtonChangerDecouvert"));

        verticalLayout_3->addWidget(pushButtonChangerDecouvert);

        horizontalLayoutWidget_2 = new QWidget(Banque);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(290, 10, 231, 51));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(horizontalLayoutWidget_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_2->addWidget(label_5);

        lineEditSoldeEpargne = new QLineEdit(horizontalLayoutWidget_2);
        lineEditSoldeEpargne->setObjectName(QStringLiteral("lineEditSoldeEpargne"));

        horizontalLayout_2->addWidget(lineEditSoldeEpargne);

        verticalLayoutWidget_4 = new QWidget(Banque);
        verticalLayoutWidget_4->setObjectName(QStringLiteral("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(400, 80, 141, 112));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(verticalLayoutWidget_4);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_4->addWidget(label_6);

        lineEditMontantEpargne = new QLineEdit(verticalLayoutWidget_4);
        lineEditMontantEpargne->setObjectName(QStringLiteral("lineEditMontantEpargne"));

        verticalLayout_4->addWidget(lineEditMontantEpargne);

        pushButtonDeposerEpargne = new QPushButton(verticalLayoutWidget_4);
        pushButtonDeposerEpargne->setObjectName(QStringLiteral("pushButtonDeposerEpargne"));

        verticalLayout_4->addWidget(pushButtonDeposerEpargne);

        pushButtonRetirerEpargne = new QPushButton(verticalLayoutWidget_4);
        pushButtonRetirerEpargne->setObjectName(QStringLiteral("pushButtonRetirerEpargne"));

        verticalLayout_4->addWidget(pushButtonRetirerEpargne);

        verticalLayoutWidget_5 = new QWidget(Banque);
        verticalLayoutWidget_5->setObjectName(QStringLiteral("verticalLayoutWidget_5"));
        verticalLayoutWidget_5->setGeometry(QRect(400, 200, 146, 113));
        verticalLayout_5 = new QVBoxLayout(verticalLayoutWidget_5);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(verticalLayoutWidget_5);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout_5->addWidget(label_7);

        doubleSpinBoxTaux = new QDoubleSpinBox(verticalLayoutWidget_5);
        doubleSpinBoxTaux->setObjectName(QStringLiteral("doubleSpinBoxTaux"));

        verticalLayout_5->addWidget(doubleSpinBoxTaux);

        pushButtonNvTaux = new QPushButton(verticalLayoutWidget_5);
        pushButtonNvTaux->setObjectName(QStringLiteral("pushButtonNvTaux"));

        verticalLayout_5->addWidget(pushButtonNvTaux);

        pushButtonCrediterInteret = new QPushButton(verticalLayoutWidget_5);
        pushButtonCrediterInteret->setObjectName(QStringLiteral("pushButtonCrediterInteret"));

        verticalLayout_5->addWidget(pushButtonCrediterInteret);


        retranslateUi(Banque);
        QObject::connect(pushButtonQuitter, SIGNAL(clicked()), Banque, SLOT(close()));

        QMetaObject::connectSlotsByName(Banque);
    } // setupUi

    void retranslateUi(QWidget *Banque)
    {
        Banque->setWindowTitle(QApplication::translate("Banque", "Banque", nullptr));
        label->setText(QApplication::translate("Banque", "Montant:", nullptr));
        pushButtonDeposer->setText(QApplication::translate("Banque", "Deposer", nullptr));
        pushButtonRetirer->setText(QApplication::translate("Banque", "Retirer", nullptr));
        label_2->setText(QApplication::translate("Banque", "Compte Courant:", nullptr));
        label_3->setText(QApplication::translate("Banque", "Historique:", nullptr));
        pushButtonQuitter->setText(QApplication::translate("Banque", "Quitter", nullptr));
        label_4->setText(QApplication::translate("Banque", "Changer le d\303\251couvert:", nullptr));
        pushButtonChangerDecouvert->setText(QApplication::translate("Banque", "Changer", nullptr));
        label_5->setText(QApplication::translate("Banque", "Compte Epargne:", nullptr));
        label_6->setText(QApplication::translate("Banque", "Montant Epargne:", nullptr));
        pushButtonDeposerEpargne->setText(QApplication::translate("Banque", "Deposer", nullptr));
        pushButtonRetirerEpargne->setText(QApplication::translate("Banque", "Retirer", nullptr));
        label_7->setText(QApplication::translate("Banque", "Changer le taux d'interet:", nullptr));
        pushButtonNvTaux->setText(QApplication::translate("Banque", "Nouveau taux d'int\303\251rets", nullptr));
        pushButtonCrediterInteret->setText(QApplication::translate("Banque", "Crediter interets", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Banque: public Ui_Banque {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BANQUE_H
