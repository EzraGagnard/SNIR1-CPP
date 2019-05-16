/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Reveil.h
 * Author: ggagnard
 *
 * Created on 24 janvier 2019, 10:23
 */


#ifndef REVEIL_H
#define REVEIL_H

#include "Clavier.h"
#include "Horloge.h"
#include "Sonnerie.h"

enum MODE_REVEIL {
    REGLAGE_HEURES_ALARME = 3,
    REGLAGE_MINUTES_ALARME,
    ACTIVATION_ALARME
};
// class Reveil :public Horloge -> héritage ---> Reveil peut se servir de la class horloge

class Reveil : public Horloge {
public:
    Reveil(const short _nbModes = 6, const short _resolution = 24);
    virtual ~Reveil();
    void SurveillerAlarme();
    void AvancerHeuresAlarme();
    void AvancerMinutesAlarme();
    void ReculerHeuresAlarme();
    void ReculerMinutesAlarme();
    TOUCHES_CLAVIER Controler(TOUCHES_CLAVIER numTouche);
private:
    int heuresAlarme;
    int minutesAlarme;
    bool alarme;
    bool enAlarme;
    Sonnerie laSonnerie;
};


#endif /* REVEIL_H */
