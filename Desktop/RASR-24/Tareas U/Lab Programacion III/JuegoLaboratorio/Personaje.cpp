#include "Personaje.h"

Personaje::Personaje()
{
    hitbox.w = 75;
    hitbox.h = 30;z
    atacando = false;
}

void Personaje::draw(SDL_Renderer* renderer)
{
    if(this->pausa == false){
    SDL_RenderCopy(renderer, texturas[animacion], NULL, &rect);
    if(frame%100==0)
    {
        animacion++;
        if(animacion>=texturas.size())
            animacion=0;
    }
    hitbox.x = rect.x + rect.w/2 - hitbox.w/2;
    hitbox.y = rect.y + rect.h/2 - hitbox.h/2;
    frame++;
    SDL_RenderCopy(renderer, hitbox_azul, NULL, &hitbox);
    }
    else if(atacando)
    {
        SDL_RenderCopy(renderer, hitbox_roja, NULL, &hitbox);
    }
    else
    {
        SDL_RenderCopy(renderer,texturas[0],NULL,&rect);
        SDL_RenderCopy(renderer,pausar[0],NULL,&rect2);
    }
}

Personaje::~Personaje()
{
    //dtor
}
