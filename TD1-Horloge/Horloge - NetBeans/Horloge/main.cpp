/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: ggagnard
 *
 * Created on 17 janvier 2019, 10:33
 */

#include <cstdlib>
#include <stdio.h>
#include "Cadran.h"
#include "Clavier.h"
#include "Horloge.h"
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    Horloge uneHorloge ;
    
    TOUCHES_CLAVIER laTouche = AUCUNE;
    
    do {
        laTouche = uneHorloge.Controler(laTouche);
    }while(laTouche != FIN);
    return 0;
}
