#ifndef FICHIER_ACCES_H
#define FICHIER_ACCES_H

#include <iostream>
#include "Fichier.h"

using namespace std;

class Fichier_acces : public Fichier
{
    public:
        Fichier_acces();
        virtual ~Fichier_acces();
        string recupInfos(string code);

    protected:

    private:
};

#endif // FICHIER_ACCES_H
