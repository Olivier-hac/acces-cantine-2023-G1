#include <iostream>

#include "Afficheur.h"
#include "Buzzer.h"
#include "Distributeur.h"
#include "Fichier_acces.h"
#include "Fichier_log.h"
#include "Leds.h"
#include "Voyants.h"
#include "Lecteur.h"

using namespace std;

Afficheur afficheur;
Buzzer buzzer;
Leds leds;
Voyants voyants;
Distributeur distributeur;
Fichier_acces fichier_acces;
Fichier_log fichier_log;
Lecteur lecteur;

string recupNom(string infos) {
    string nom=infos.substr(0,infos.length()-2);
    return nom;
}

int main()
{
    cout << "---------- Controle d'acces cantine ------------" << endl << endl;

    string code=lecteur.lire();
    cout << "code recu " << code << endl;
    string infos=fichier_acces.recupInfos(code);
    cout << "infos : " << infos << endl;
    string nom=recupNom(infos);
    cout << "nom:" << nom << endl;
    afficheur.afficher(nom);
    fichier_log.enregistrer(code,infos);
    char statut=infos[infos.length()-1];
    cout << "statut:" << statut << endl;
    if (statut=='A') { //si utilisateur autorisé
        distributeur.distribuer();
        leds.allumer(VERT);
        voyants.allumer(VERT);
        buzzer.bip(1);
    } else { //si utilisateur pas autorisé
        leds.allumer(ROUGE);
        voyants.allumer(ROUGE);
        if (nom!="inconnu") { //utilisateur connu
            buzzer.bip(2);
        } else { //utilisateur inconnu
            buzzer.bip(3);
        }
    }
    return 0;
}
