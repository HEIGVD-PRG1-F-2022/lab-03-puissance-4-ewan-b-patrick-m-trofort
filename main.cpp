/*
-----------------------------------------------------------------------------------
Nom du fichier  : main.cpp
Auteur(s)       : Ewan Bloechle, Patrick Maillard
Date creation   : 18.10.2022

Description     : programme permettant joueur au puissance 4 à 2 joueur

Remarque(s)     :

Compilateur     : Mingw-w64 g++ 11.2.0
-----------------------------------------------------------------------------------
*/

#include "puissance4.h"


int main() {
    regle();
    int ligne = 6, colonne = 7;
    puissance4(ligne, colonne);
    return 0;
}







