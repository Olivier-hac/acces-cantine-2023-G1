#include "Fichier_acces.h"

using namespace std;

Fichier_acces::Fichier_acces()
{
    cout << "Fichier Acces" << endl;
}

Fichier_acces::~Fichier_acces()
{
    //dtor
}

string Fichier_acces::recupInfos(string code) {
    cout << "recup infos de " << code << endl;
    return "inconnu;R";
}
