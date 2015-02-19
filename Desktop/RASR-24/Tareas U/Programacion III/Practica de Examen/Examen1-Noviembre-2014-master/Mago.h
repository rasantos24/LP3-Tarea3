#ifndef MAGO_H
#define MAGO_H
#include "Personaje.h"

class Mago : public Personaje
{
    public:
        Mago(int ataque, int vida);
        void especial();
        virtual ~Mago();
    protected:
    private:
};

#endif // MAGO_H
