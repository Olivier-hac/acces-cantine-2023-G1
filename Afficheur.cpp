#include "Afficheur.h"

using namespace std;

Afficheur::Afficheur()
{
    cout << "Afficheur" << endl;
}

Afficheur::~Afficheur()
{
    //dtor
}

void Afficheur::afficher(string texte) {
    cout << "afficher " << texte << endl;
}
