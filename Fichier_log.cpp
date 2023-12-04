#include "Fichier_log.h"

using namespace std;

Fichier_log::Fichier_log()
{
    cout << "Fichier log" << endl;
}

Fichier_log::~Fichier_log()
{
    //dtor
}

void Fichier_log::enregistrer(string code, string infos) {
    cout << "enregistrer " << code << " et " << infos << endl;
    cout << getDateHeure() << endl;

    ouvrir("passages.log", APPEND);
    string dateHeure=getDateHeure();
    ecrire(dateHeure+";"+code+";"+infos+"\n");
    fermer();
}

string Fichier_log::getDateHeure() {
    time_t rawtime;
    struct tm * timeinfo;
    char buffer [80];

    time (&rawtime);
    timeinfo = localtime (&rawtime);

    strftime (buffer,80,"%d/%m/%Y %X",timeinfo);
    return buffer;
}
