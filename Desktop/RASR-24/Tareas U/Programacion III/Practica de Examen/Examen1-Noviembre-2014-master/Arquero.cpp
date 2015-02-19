#include "Arquero.h"

Arquero::Arquero(int ataque, int vida, int flechas)
{
    this->ataque = ataque;
    this->vida = vida;
    this->flechas = flechas;
}

Arquero::~Arquero()
{
    //dtor
}

void Arquero::operator+=(int flechas)
{
    this->flechas+=flechas;
}

void Arquero::regenerarVida()
{
    this->vida+=20;
}

void Arquero::poderEspecial()
{
    this->ataque+=5;
    this->flechas=0;
}
