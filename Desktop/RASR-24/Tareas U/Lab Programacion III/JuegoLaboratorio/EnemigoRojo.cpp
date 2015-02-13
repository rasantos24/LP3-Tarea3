#include "EnemigoRojo.h"

EnemigoRojo::EnemigoRojo(SDL_Renderer* renderer)
{
    texturas.push_back(IMG_LoadTexture(renderer,"EnemigoRojo/standing/11.png"));
    texturas.push_back(IMG_LoadTexture(renderer,"EnemigoRojo/standing/22.png"));
    texturas.push_back(IMG_LoadTexture(renderer,"EnemigoRojo/standing/33.png"));
    texturas.push_back(IMG_LoadTexture(renderer,"EnemigoRojo/standing/44.png"));
    SDL_QueryTexture(texturas[0], NULL, NULL, &rect.w, &rect.h);
    rect.x = 700;
    rect.y = 300;

    pausar.push_back(IMG_LoadTexture(renderer,"pausa.png"));
    SDL_QueryTexture(pausar[0], NULL, NULL, &rect2.w, &rect2.h);
    rect2.x = 200;
    rect2.y = 150;

    frame = 0;
    animacion_enemigo = 0;
}

EnemigoRojo::~EnemigoRojo()
{
    //dtor
}

void EnemigoRojo::act()
{
    const Uint8* currentKeyStates = SDL_GetKeyboardState(NULL);

    if(this->pausa==false)
    {
        //Caminar
        if(currentKeyStates[SDL_SCANCODE_UP] && rect.y >= 200)
        {

        }

        if(currentKeyStates[SDL_SCANCODE_LEFT] && rect.x >= 1)
        {
            rect.x--;
        }

        if(currentKeyStates[SDL_SCANCODE_DOWN] && rect.y <= 310)
        {

        }

        if(currentKeyStates[SDL_SCANCODE_RIGHT] && rect.x <= 800)
        {
            rect.x++;
        }

        //Correr
        if(currentKeyStates[SDL_SCANCODE_UP] && currentKeyStates[SDL_SCANCODE_M] && rect.y >= 200)
        {

        }

        if(currentKeyStates[SDL_SCANCODE_LEFT] && currentKeyStates[SDL_SCANCODE_M] && rect.x >= 1)
        {
            rect.x-=2;
        }

        if(currentKeyStates[SDL_SCANCODE_DOWN] && currentKeyStates[SDL_SCANCODE_M] && rect.y <= 310)
        {

        }

        if(currentKeyStates[SDL_SCANCODE_RIGHT] && currentKeyStates[SDL_SCANCODE_M] && rect.x <= 800)
        {
            rect.x+=2;
        }

        if(currentKeyStates[SDL_SCANCODE_P])
        {
            this->pausa=true;
        }
    }

    if(currentKeyStates[SDL_SCANCODE_O])
    {
        this->pausa=false;
    }
}
