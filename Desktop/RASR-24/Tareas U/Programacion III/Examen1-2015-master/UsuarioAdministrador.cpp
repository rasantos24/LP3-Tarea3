#include "UsuarioAdministrador.h"

UsuarioAdministrador::UsuarioAdministrador(string nombre, string pass)
{
    this->nombre=nombre;
    this->pass=pass;
    //ctor
}

UsuarioAdministrador::~UsuarioAdministrador()
{
    //dtor
}

UsuarioAdministrador::UsuarioAdministrador()
{
    //ctor
}


bool UsuarioAdministrador::soyAdministrador()
{
    return true;
}
