/*
-----------------------------------------------------------------------------------
Nom du fichier  : puissance4.h
Auteur(s)       : Ewan Bloechle, Patrick Maillard
Date creation   : 20.10.2022

Description     : Contient les déclarations de fonctions utilisées

Remarque(s)     :

Compilateur     : Mingw-w64 g++ 11.2.0
-----------------------------------------------------------------------------------
*/
#ifndef MANDELBROT_PUISSANCE4_H
#define MANDELBROT_PUISSANCE4_H

#include <iostream>
#include <vector>

using namespace std;

void regle();//fonction affichant uniquement, ne prend aucun commentaire

void affichage(vector<vector<int>> &tab, const int &hauteur, const int &
largeur);//Fonction d'affichage du jeu, prend en paramètre le tableau à afficher ainsi que sa taille en long et en large

void puissance4(const int &ligne, const int &colonne);//Fonction du jeux puissance 4, prend un paramètre la taille du tableau

int verifVictoire(int joueur, int hauteur, int colonne, vector<vector<int>> tab);//fonction de verification du gagnant
//prend en paramètre la joueur à tester, la taille du tableau et le tableau

void entreeJoueur(int joueur, int hauteur, vector<vector<int>> &tab);//fonction permettant au joueur de choisir une colonne
//prend en paramètre la joueur actuel, la hauteur du tableau et le tableau


#endif //MANDELBROT_PUISSANCE4_H
