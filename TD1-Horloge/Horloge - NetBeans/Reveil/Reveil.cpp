/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Reveil.cpp
 * Author: ggagnard
 * 
 * Created on 24 janvier 2019, 10:23
 */


#include "Reveil.h"
#include "Sonnerie.h"

Reveil::Reveil(const short _nbModes, const short _resolution) :
Horloge(_nbModes, _resolution),
heuresAlarme(0),
minutesAlarme(0),
alarme(false),
enAlarme(false) {


}

Reveil::~Reveil() {


}

void Reveil::SurveillerAlarme() {
    if (alarme == true) {
        if (heures == heuresAlarme && minutes == minutesAlarme) {
            laSonnerie.FaireSonner();
            enAlarme = true;
        }
    }
}

void Reveil::AvancerHeuresAlarme() {
    heuresAlarme++;
    if (heuresAlarme == resolution) {
        heuresAlarme = 0;
    }
}

void Reveil::AvancerMinutesAlarme() {
    minutesAlarme++;
    if (minutesAlarme == 60) {
        minutesAlarme = 0;
    }
}

void Reveil::ReculerHeuresAlarme() {
    heuresAlarme--;
    if (heuresAlarme == -1) {
        heuresAlarme = resolution - 1;
    }
}

void Reveil::ReculerMinutesAlarme() {
    minutesAlarme--;
    if (minutesAlarme == -1) {
        minutesAlarme = 59;
    }
}

TOUCHES_CLAVIER Reveil::Controler(TOUCHES_CLAVIER numTouche) {
    numTouche = Horloge::Controler(numTouche);

    switch (mode) {
        case AUCUN_REGLAGE:
            SurveillerAlarme();
            if (enAlarme == true & numTouche == MODE) {  
                laSonnerie.ArreterAlarme();
                ReculerMinutesAlarme();//truc tordu pour fair s'arreter l'alarme en feat. avec Mathis
                numTouche = AUCUNE;
                enAlarme = false;

            }
            break;
        case REGLAGE_HEURES_ALARME:
            switch (numTouche) {
                case MOINS:
                    ReculerHeuresAlarme();
                    break;
                case PLUS:
                    AvancerHeuresAlarme();
                    break;
                case MODE:
                    ChangerMode();
                    break;
            }
            leCadran->Afficher("AH", 1);
            leCadran->Afficher(heuresAlarme, 4);
            break;
        case REGLAGE_MINUTES_ALARME:
            switch (numTouche) {
                case MOINS:
                    ReculerMinutesAlarme();
                    break;
                case PLUS:
                    AvancerMinutesAlarme();
                    break;
                case MODE:
                    ChangerMode();
                    break;
            }
            leCadran->Afficher("AM", 1);
            leCadran->Afficher(minutesAlarme, 4);
            break;
        case ACTIVATION_ALARME:
            switch (numTouche) {
                case PLUS:
                    alarme = true;
                    break;
                case MOINS:
                    alarme = false;
                    break;
                case MODE:
                    ChangerMode();
                    numTouche = AUCUNE;
                    break;
            }
            leCadran->Afficher("AL", 1);
            if (alarme == true) {
                leCadran->Afficher("ON ", 4);// ESPACE IMPERATIF SINON C CHIIIIANT
            } else {
                leCadran->Afficher("OFF ", 4);
            }
            break;
    }

    return numTouche;
}