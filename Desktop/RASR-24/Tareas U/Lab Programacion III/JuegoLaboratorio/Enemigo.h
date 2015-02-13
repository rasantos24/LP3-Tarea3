#ifndef ENEMIGO_H
#define ENEMIGO_H

#include<SDL.h>
#include<SDL_image.h>
#include <vector>
using namespace std;

class Enemigo
{
    public:
        vector<SDL_Texture*>texturas, pausar;
        SDL_Rect rect, rect2;
        int frame;
        int animacion_enemigo;
        bool pausa;
        Enemigo();
        virtual ~Enemigo();

        virtual void draw(SDL_Renderer* renderer);
        virtual void act()=0;

    protected:
    private:
};

#endif // ENEMIGO_H
