/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: ggagnard
 *
 * Created on 17 janvier 2019, 09:44
 */


#include <cstdlib>
#include <stdio.h>
#include "Clavier.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    Clavier leClavier;
    TOUCHES_CLAVIER touche;
    do {
        touche = leClavier.ScruterClavier();
        if (touche != AUCUNE) {
            printf("%d\n", touche);
        }
    } while (touche != FIN);
    //traitement et affichage
    return 0;
}