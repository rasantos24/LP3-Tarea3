#ifndef SHO_H
#define SHO_H

#include<SDL.h>
#include<SDL_image.h>
#include <vector>
using namespace std;

class Sho
{
    public:
        vector<SDL_Texture*>sho_standing, pausar, salto, agachar, correr;
        SDL_Rect rect, rect2;

        int verde=0, frame, salto1=0, salto2=0, corre1=0, corre2=0;
        int animacion_sho;
        bool pausa, sal, cor;

        Sho(SDL_Renderer* renderer);
        void saltar();
        void corre();

        void draw(SDL_Renderer* renderer);
        void act();
        virtual ~Sho();
    protected:
    private:
};

#endif // SHO_H
