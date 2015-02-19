#ifndef ARQUERO_H
#define ARQUERO_H
#include "Personaje.h"

class Arquero: public Personaje
{
    public:
        int flechas;
        Arquero(int ataque, int vida, int flechas);
        void operator+=(int flechas);
        void regenerarVida();
        void poderEspecial();
        virtual ~Arquero();
    protected:
    private:
};

#endif // ARQUERO_H
