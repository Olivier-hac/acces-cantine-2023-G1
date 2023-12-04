#ifndef VOYANTS_H
#define VOYANTS_H

#define ROUGE 1
#define VERT 2

#include <iostream>

class Voyants
{
    public:
        Voyants();
        virtual ~Voyants();
        void allumer(int couleur);

    protected:

    private:
};

#endif // VOYANTS_H
