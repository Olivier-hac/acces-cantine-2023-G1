#include "Lecteur.h"

using namespace std;

Lecteur::Lecteur()
{
    cout << "Lecteur" << endl;
}

Lecteur::~Lecteur()
{
    //dtor
}

string Lecteur::lire() {
    cout << "lecture code" << endl;
    return "1234";
}
