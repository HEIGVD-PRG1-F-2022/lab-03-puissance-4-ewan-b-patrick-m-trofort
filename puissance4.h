//
// Created by ewanb on 20.10.2022.
//

#ifndef MANDELBROT_PUISSANCE4_H
#define MANDELBROT_PUISSANCE4_H

#include <iostream>
#include <vector>

using namespace std;

void regle();

void affichage(std::vector<std::vector<int>> &tab, const int &hauteur, const int &
largeur);

void puissance4(const int &ligne, const int &colonne);

int verifVictoire(int joueur, int hauteur, int colonne, vector<vector<int>> tab);

void entreeJoueur(int joueur, int hauteur, vector<vector<int>> &tab);


#endif //MANDELBROT_PUISSANCE4_H
