#ifndef USUARIONORMAL_H
#define USUARIONORMAL_H

#include "Usuario.h"

class UsuarioNormal : public Usuario
{
    public:
        string mensaje;
        UsuarioNormal(string nombre, string pass, string mensaje);
        string getMensaje();
        bool soyAdministrador();
        bool operator==(string mensaje);
        virtual ~UsuarioNormal();
    protected:
    private:
};

#endif // USUARIONORMAL_H
