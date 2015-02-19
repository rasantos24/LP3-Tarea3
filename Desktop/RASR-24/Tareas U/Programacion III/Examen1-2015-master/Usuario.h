#ifndef USUARIO_H
#define USUARIO_H

#include <iostream>
using namespace std;

class Usuario
{
    public:
        string nombre;
        string pass;
        Usuario();
        virtual string getMensaje();
        virtual bool soyAdministrador()=0;
        virtual ~Usuario();
    protected:
    private:
};

#endif // USUARIO_H
