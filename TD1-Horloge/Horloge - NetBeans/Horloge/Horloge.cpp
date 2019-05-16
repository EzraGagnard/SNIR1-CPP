/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Horloge.cpp
 * Author: ggagnard
 * 
 * Created on 17 janvier 2019, 10:49
 */
#include "Horloge.h"

Horloge::Horloge(const short _nbModes, const short _resolution) :
heures(0),
minutes(0),
nbModes(_nbModes),
resolution(_resolution),
mode(AUCUN_REGLAGE) {
    leCadran = new Cadran(5, 5);
    leClavier = new Clavier;
    valAvant = time(NULL);
}

Horloge::~Horloge() {
    delete leCadran;
    delete leClavier;
}

bool Horloge::AvancerHeures() {
    heures++;
    bool retour = false;
    if (heures == resolution) {
        heures = 0;
        retour = true;
    }
    return retour;
}

bool Horloge::AvancerMinutes() {
    minutes++;
    bool retour = false;
    if (minutes == 60) {
        minutes = 0;
        retour = true;
    }
    return retour;
}

void Horloge::ActualiserHeure() {
    time_t valCourante = time(NULL);
    double seconde = difftime(valCourante, valAvant);

    if (seconde > 60) {
        valAvant = valCourante;
        if (AvancerMinutes())
            AvancerHeures();
    }
}

void Horloge::ReculerHeures() {
    heures--;
    if (heures == -1) {
        heures = resolution - 1;
    }
}

void Horloge::ReculerMinutes() {
    minutes--;
    if (minutes == -1) {
        heures--;
        minutes = 59;
    }
}

void Horloge::ChangerMode() {
    mode = (mode + 1) % nbModes;

    /*  mode++;
    if (mode == nbModes) {
        mode = 0;
    } */
}

TOUCHES_CLAVIER Horloge::Controler(const TOUCHES_CLAVIER numTouche) {
    switch (mode) {
        case AUCUN_REGLAGE:
            if (numTouche == MODE) {
                ChangerMode();

            } else {
                ActualiserHeure();
            }
            break;
        case REGLAGE_HEURES:
            switch (numTouche) {
                case MOINS:
                    ReculerHeures();
                    break;
                case PLUS:
                    AvancerHeures();
                    break;
                case MODE:
                    ChangerMode();
                    break;
            }
            break;
        case REGLAGE_MINUTES:
            switch (numTouche) {
                case MOINS:
                    ReculerMinutes();
                    break;
                case PLUS:
                    AvancerMinutes();
                    break;
                case MODE:
                    ChangerMode();
                    break;
            }
            break;
    }
    switch (mode) {
        case AUCUN_REGLAGE:
            leCadran->Afficher(heures, 1);
            leCadran->Afficher(minutes, 4);
            break;
        case REGLAGE_HEURES:
            leCadran->Afficher("HH", 1);
            leCadran->Afficher(heures, 4);
            break;
        case REGLAGE_MINUTES:
            leCadran->Afficher("MM", 1);
            leCadran->Afficher(minutes, 4);
            break;

    }
    return leClavier->ScruterClavier();
}