#ifndef PERSONAJE_H
#define PERSONAJE_H

#include<SDL.h>
#include<SDL_image.h>
#include <vector>
using namespace std;

class Personaje
{
    public:

        vector<SDL_Texture*>texturas, pausar;
        SDL_Texture* hitbox_azul;
        SDL_Texture* hitbox_roja;
        SDL_Rect rect, rect2, hitbox;
        int frame;
        int animacion;
        bool atacando, pausa;

        virtual void draw(SDL_Renderer* renderer);
        virtual void act()=0;

        Personaje();
        virtual ~Personaje();
    protected:
    private:
};

#endif // PERSONAJE_H
