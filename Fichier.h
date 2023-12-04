#ifndef FICHIER_H
#define FICHIER_H

#include <iostream>
#include <fstream>

using namespace std;

#define APPEND 1
#define READ 2
#define WRITE 3

class Fichier
{
    public:
        Fichier();
        virtual ~Fichier();
        void ouvrir(string nomFichier, int mode);
        void fermer();
        void ecrire(string texte);
        string lire();

    protected:

    private:
        ofstream fichier;
};

#endif // FICHIER_H
