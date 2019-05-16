/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Sonnerie.h
 * Author: ggagnard
 *
 * Created on 24 janvier 2019, 10:24
 */

#ifndef SONNERIE_H
#define SONNERIE_H

#include "Cadran.h"

class Sonnerie{
public:
    Sonnerie();
    ~Sonnerie();
    void FaireSonner();
    void ArreterAlarme();
    
private:
    Cadran *getUp;
    
};

#endif /* SONNERIE_H */
