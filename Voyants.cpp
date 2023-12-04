#include "Voyants.h"

using namespace std;

Voyants::Voyants()
{
    cout << "Voyants" << endl;
}

Voyants::~Voyants()
{
    //dtor
}

void Voyants::allumer(int couleur) {
    switch(couleur) {
    case ROUGE:
        cout << "voyant rouge" << endl;
        break;
    case VERT:
        cout << "voyant vert" << endl;
        break;

    }
}
