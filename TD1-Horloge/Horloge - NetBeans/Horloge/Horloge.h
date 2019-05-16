/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Horloge.h
 * Author: ggagnard
 *
 * Created on 17 janvier 2019, 10:50
 */
#ifndef HORLOGE_H
#define HORLOGE_H

#include "Clavier.h"
#include "Cadran.h"
#include <time.h>

enum MODE_HORLOGE {
    AUCUN_REGLAGE,
    REGLAGE_HEURES,
    REGLAGE_MINUTES
};

class Horloge {
public:
    Horloge(const short _nbModes = 3, const short _resolution = 24);
    ~Horloge();
    void ActualiserHeure();
    bool AvancerHeures();
    bool AvancerMinutes();
    void ReculerHeures();
    void ReculerMinutes();
    TOUCHES_CLAVIER Controler(TOUCHES_CLAVIER numTouche);
    void ChangerMode();

private:
    int heures;
    int minutes;
    int resolution;
    const short nbModes;
    short mode;
    time_t valAvant;

    Clavier *leClavier;
    Cadran *leCadran;
};

#endif /* HORLOGE_H */
