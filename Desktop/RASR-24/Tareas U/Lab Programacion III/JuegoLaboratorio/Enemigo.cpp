#include "Enemigo.h"

Enemigo::Enemigo()
{
    //ctor
}

Enemigo::~Enemigo()
{
    //dtor
}

void Enemigo::draw(SDL_Renderer* renderer)
{
    if(this->pausa == false){
    SDL_RenderCopy(renderer, texturas[animacion_enemigo], NULL, &rect);
    if(frame%100==0)
    {
        animacion_enemigo++;
        if(animacion_enemigo>=texturas.size())
            animacion_enemigo=0;
    }
    frame++;
    }else{
        SDL_RenderCopy(renderer,texturas[0],NULL,&rect);
        SDL_RenderCopy(renderer,pausar[0],NULL,&rect2);
    }
}
