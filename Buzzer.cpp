#include "Buzzer.h"

using namespace std;

Buzzer::Buzzer()
{
    cout << "Buzzer" << endl;
}

Buzzer::~Buzzer()
{
    //dtor
}

void Buzzer::bip(int nbBip) {
    cout << nbBip << " bip" << endl;
}
