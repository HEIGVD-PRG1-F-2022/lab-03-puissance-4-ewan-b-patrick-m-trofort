#include <iostream>
#include <vector>

using namespace std;
void regle();
void affichage(std::vector<std::vector<int>>& tab, const int& hauteur, const int&
largeur);
void puissance4();

int main() {
    //regle();


    return 0;
}

void regle(){

    cout<<"REGLE : "<<endl<<"Le but du jeu est d'aligner une suite de 4 pions de même couleur sur une grille comptant 6 rangees et 7 colonnes. "<<endl
        <<"Chaque joueur dispose de 21 pions d'une couleur. Tour a tour, les deux joueurs placent un pion dans"<<endl
        <<"la colonne de leur choix, le pion coulisse alors jusqu'a la position la plus basse possible dans la dite colonne"<<endl
        <<"a la suite de quoi c'est a l'adversaire de jouer. "<<endl
        <<"Le vainqueur est le joueur qui realise le premier un alignement (horizontal, vertical ou diagonal) "<<endl
        <<"consecutif d'au moins quatre pions de sa couleur. "<<endl
        <<"Si, alors que toutes les cases de la grille de jeu sont remplies, aucun des deux joueurs n'a realise un tel alignement,"<<endl
        <<"la partie est declaree nulle."<<endl;

}
void affichage(std::vector<std::vector<int>>& tab, const int& hauteur, const int&
largeur){
    for(int i = 0; i < hauteur; ++i){
        cout << "+---+---+---+---+---+---+---+" << endl << "|";
        for(int j = 0; j < largeur;++j){
            cout << " " << tab[i][j] << " " << "|";
        }
        cout << endl;
    }
    cout << "+---+---+---+---+---+---+---+" << endl;

}

void puissance4(const int& ligne, const int& colonne){
    vector<vector<int>> tableau(ligne, vector<int>(colonne));
    /*for(){

    }*/
    affichage(tableau, ligne,colonne);
}


