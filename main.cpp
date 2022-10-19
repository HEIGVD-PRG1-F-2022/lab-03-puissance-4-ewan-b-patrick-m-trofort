#include <iostream>
#include <vector>

using namespace std;
void regle();
void affichage(std::vector<std::vector<int>>& tab, const int& hauteur, const int&
largeur);
void puissance4(const int& ligne, const int& colonne);



int main() {
    //regle();
    int ligne = 6, colonne = 7;
    puissance4(ligne, colonne);
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
    vector<vector<int>> tab(ligne, vector<int>(colonne));
    bool enCours = true;
    int joueur1, joueur2;
    const int hauteur = tab.size()-1;
    while(enCours){
        //position choisi par le joueur 1
        cin >> joueur1;
        for(int i = 0; i < hauteur; ++i){
            if(tab[hauteur - i][joueur1 - 1] == 0){
                tab[hauteur - i][joueur1 - 1] = 1;
                break;
            }
        }

        affichage(tab, ligne,colonne);
        //controle de victoire joueur 1;
        for(int i = hauteur; i >= 0; --i){
            for(int j = colonne; j >= 0; --j)
            {
                if(tab[i][j] == 0){
                    continue; // retourne à la 2 ème boucle for
                }
                //tester si le continue marche avec un cout plus tard
            }
        }




        //position choisi par le joueur 2
        cin >> joueur2;
        for(int i = 0; i < hauteur; ++i){
            if(tab[hauteur - i][joueur2 - 1] == 0){
                tab[hauteur - i][joueur2 - 1] = 2;
                break;
            }
        }
    }
    //affichage(tableau, ligne,colonne);
}





