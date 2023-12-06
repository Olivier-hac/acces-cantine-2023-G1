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

    string ligne;

    fstream fic;
    fic.open("droitAcces.csv");
    getline(fic,ligne);
    cout << "ligne:" << ligne << endl;
    fic.close();




    ouvrir("droitAcces.csv",READ);

    string infos="inconnu;R";
    bool codeNonTrouve=true;
    bool finFichier=false;
    while (codeNonTrouve && !finFichier) {
        ligne=lire1ligne(); //on lit une ligne
        if (ligne=="") finFichier=true; //si la ligne est vide on est à la fin du fichier
        int posCode=ligne.find(code+";");
        if (posCode!=string::npos && posCode==0) { //on a trouvé le code
            int pos=ligne.find(";"); //on cherche la position du ';'
            infos=ligne.substr(pos+1, ligne.length()-pos-1); //on récupère la chaine après le ';'
            cout << "infos:" << infos << endl;
            codeNonTrouve=false;
        }
    }

    return infos;
}
