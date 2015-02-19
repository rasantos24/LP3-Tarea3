#include "Usuario.h"

Usuario::Usuario()
{
    this->nombre=nombre;
    this->pass=pass;
    //ctor
}

Usuario::~Usuario()
{
    //dtor
}

string Usuario::getMensaje()
{
    return "";
}

bool Usuario::soyAdministrador()
{
    return false;
}
