#include <iostream>
#include <vector>

using namespace std;
void regle();
void affichage(std::vector<std::vector<int>>& tab, const int& hauteur, const int&
largeur);
void puissance4(const int& ligne, const int& colonne);
int verifVictoire(int joueur, int hauteur, int colonne,vector<vector<int>> tab);
void entreeJoueur(int joueur,int hauteur,vector<vector<int>>& tab);



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

    int joueur1 = 1, joueur2 = 2;

    const int hauteur = tab.size()-1;

    while(true){

        //tour du J1
        entreeJoueur(joueur1,hauteur,tab);

        affichage(tab, ligne,colonne);

        if(verifVictoire(joueur1,hauteur,colonne,tab)){
            break;
        }

        //tour du J2
        entreeJoueur(joueur2,hauteur,tab);

        affichage(tab, ligne,colonne);

        if(verifVictoire(joueur2,hauteur,colonne,tab)){
            break;
        }
    }

}

void entreeJoueur(int joueur,int hauteur,vector<vector<int>>& tab){
    cout<<"J"<<joueur<<" a votre tour ! selectionner une colonne :";
    int entree;
    cin >> entree;

    for(int i = 0; i < hauteur; ++i){
        if(tab[hauteur - i][entree - 1] == 0){
            tab[hauteur - i][entree - 1] = joueur;
            break;
        }
    }
}


int verifVictoire(int joueur, int hauteur, int colonne,vector<vector<int>> tab){

    int fin = 0;
    for(int i = hauteur; i >= 0; --i){
        for(int j = colonne-1; j >= 0; --j)
        {
            if(tab[i][j] == 0){
                continue; // retourne à la 2 ème boucle for
            }
            if(tab[i][j] & tab[i][j-1] & tab[i][j-2] & tab[i][j-3] == joueur){
                fin = 1;
                cout<<"Victoire du joueur "<<joueur<<" !"<<endl;

            }
            else if(tab[i][j] & tab[i-1][j-1] & tab[i-2][j-2] & tab[i-3][j-3] == joueur){
                fin = 1;
                cout<<"Victoire du joueur "<<joueur<<" !"<<endl;
            }
            else if(tab[i][j] & tab[i-1][j] & tab[i-2][j] & tab[i-3][j] == joueur){
                fin = 1;
                cout<<"Victoire du joueur "<<joueur<<" !"<<endl;
            }
            else if(tab[i][j] & tab[i-1][j+1] & tab[i-2][j+2] & tab[i-3][j+3] == joueur){
                fin = 1;
                cout<<"Victoire du joueur "<<joueur<<" !"<<endl;
            }
            //tester si le continue marche avec un cout plus tard
        }
    }
    return fin;

}





