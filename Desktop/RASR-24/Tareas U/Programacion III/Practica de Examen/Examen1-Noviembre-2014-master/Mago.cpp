#include "Mago.h"

Mago::Mago(int ataque, int vida)
{
    this->ataque = ataque;
    this->vida = vida;
}

Mago::~Mago()
{
    //dtor
}

void Mago::especial()
{
    cout<<"Prrrin"<<endl;
}
