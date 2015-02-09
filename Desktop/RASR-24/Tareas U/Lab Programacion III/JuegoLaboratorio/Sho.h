#ifndef SHO_H
#define SHO_H

#include<SDL.h>
#include<SDL_image.h>
#include <vector>
using namespace std;

class Sho
{
    public:
        vector<SDL_Texture*>sho_standing, pausar;
        SDL_Rect rect, rect2;
        int frame;
        int animacion_sho;
        bool pausa;
        Sho(SDL_Renderer* renderer);
        void draw(SDL_Renderer* renderer);
        void act();
        virtual ~Sho();
    protected:
    private:
};

#endif // SHO_H
