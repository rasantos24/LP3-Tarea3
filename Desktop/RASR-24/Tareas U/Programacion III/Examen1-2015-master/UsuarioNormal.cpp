#include "UsuarioNormal.h"

UsuarioNormal::UsuarioNormal(string nombre, string pass, string mensaje)
{
    this->nombre=nombre;
    this->pass=pass;
    this->mensaje=mensaje;
    //ctor
}

UsuarioNormal::~UsuarioNormal()
{
    //dtor
}

string UsuarioNormal::getMensaje();
{
    return mensaje;
}

bool UsuarioNormal::soyAdministrador()
{
    return false;
}

bool UsuarioNormal::operator==(string mensaje);
{
    if(this->mensaje == mensaje)
    {
        return true;
    }

    return false;
}

