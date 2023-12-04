#ifndef LEDS_H
#define LEDS_H

#define ROUGE 1
#define VERT 2
#define BLEU 4

#include <iostream>

class Leds
{
    public:
        Leds();
        virtual ~Leds();
        void allumer(int couleur);

    protected:

    private:
};

#endif // LEDS_H
