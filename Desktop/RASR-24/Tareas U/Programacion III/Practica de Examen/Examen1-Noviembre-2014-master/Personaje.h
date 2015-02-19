#ifndef PERSONAJE_H
#define PERSONAJE_H

#include <iostream>
using namespace std;

class Personaje
{
public:
    int ataque;
    int vida;

    Personaje(int ataque,int vida)
    {

    }

    Personaje()
    {

    }
    void recibirAtaque(int ataque_recibido);
    virtual void regenerarVida()
    {
        this->vida += 10;
    }

    virtual void poderEspecial() = 0;
};

#endif
