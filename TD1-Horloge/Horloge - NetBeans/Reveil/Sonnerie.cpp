/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Sonnerie.cpp
 * Author: ggagnard
 * 
 * Created on 24 janvier 2019, 10:24
 */

#include "Sonnerie.h"

Sonnerie::Sonnerie() {
    getUp = new Cadran(5, 8);
}

Sonnerie::~Sonnerie() {
    delete getUp;
}

void Sonnerie::FaireSonner() {
    getUp->Afficher("ALARME", 1);
}

void Sonnerie::ArreterAlarme() {
    getUp->Effacer();
}