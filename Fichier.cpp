#include "Fichier.h"

using namespace std;

Fichier::Fichier()
{
    //ctor
}

Fichier::~Fichier()
{
    //dtor
}

void Fichier::ouvrir(string nomFichier, int mode) {
    if (mode==APPEND) {
        fichier.open(nomFichier.c_str(), ios::app);
    } else if (mode==READ) {
        fichier.open(nomFichier.c_str());
    }
}

void Fichier::fermer() {
    fichier.close();
}

void Fichier::ecrire(string texte) {
    fichier << texte;
}

string Fichier::lire1ligne() {
    string ligne;
    getline(fichier, ligne);
    return ligne;
}

string Fichier::lire() {

}
