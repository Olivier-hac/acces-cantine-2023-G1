#ifndef BUZZER_H
#define BUZZER_H

#include <iostream>

class Buzzer
{
    public:
        Buzzer();
        virtual ~Buzzer();
        void bip(int nbBip);

    protected:

    private:
};

#endif // BUZZER_H
