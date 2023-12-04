#ifndef FICHIER_LOG_H
#define FICHIER_LOG_H

#include <iostream>
#include <time.h>
#include "Fichier.h"

using namespace std;

class Fichier_log : public Fichier
{
    public:
        Fichier_log();
        virtual ~Fichier_log();
        void enregistrer(string code, string infos);

    protected:

    private:
        string getDateHeure();
};

#endif // FICHIER_LOG_H
