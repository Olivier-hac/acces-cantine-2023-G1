#include "Leds.h"

using namespace std;

Leds::Leds()
{
    cout << "Leds" << endl;
}

Leds::~Leds()
{
    //dtor
}

void Leds::allumer(int couleur) {
    switch(couleur) {
    case ROUGE:
        cout << "led rouge" << endl;
        break;
    case VERT:
        cout << "led vert" << endl;
        break;
    case BLEU:
        cout << "led bleu" << endl;
        break;
    }
}
