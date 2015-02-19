#include "Guerrero.h"

Guerrero::Guerrero(int ataque, int vida)
{
    this->ataque = ataque;
    this->vida = vida;
}

Guerrero::~Guerrero()
{
    //dtor
}

void Guerrero::poderEspecial()
{
    ataque = ataque*2;
    vida = vida/2;
}
