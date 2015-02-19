#ifndef USUARIOADMINISTRADOR_H
#define USUARIOADMINISTRADOR_H

#include "Usuario.h"

class UsuarioAdministrador : public Usuario
{
    public:
        UsuarioAdministrador(string nombre, string pass);
        UsuarioAdministrador();
        bool soyAdministrador();
        virtual ~UsuarioAdministrador();
    protected:
    private:
};

#endif // USUARIOADMINISTRADOR_H
