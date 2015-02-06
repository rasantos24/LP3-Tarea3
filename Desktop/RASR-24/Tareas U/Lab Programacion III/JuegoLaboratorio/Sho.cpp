#include "Sho.h"

Sho::Sho(SDL_Renderer* renderer)
{
    sho_standing.push_back(IMG_LoadTexture(renderer,"1.png"));
    sho_standing.push_back(IMG_LoadTexture(renderer,"2.png"));
    sho_standing.push_back(IMG_LoadTexture(renderer,"3.png"));
    sho_standing.push_back(IMG_LoadTexture(renderer,"4.png"));

    SDL_QueryTexture(sho_standing[0], NULL, NULL, &rect.w, &rect.h);
    rect.x = 100;
    rect.y = 300;

    frame = 0;
    animacion_sho = 0;
}

void Sho::draw(SDL_Renderer* renderer)
{
    SDL_RenderCopy(renderer, sho_standing[animacion_sho], NULL, &rect);
    if(frame%100==0)
    {
        animacion_sho++;
        if(animacion_sho>=sho_standing.size())
            animacion_sho=0;
    }
    frame++;
}

void Sho::act()
{
    const Uint8* currentKeyStates = SDL_GetKeyboardState(NULL);
    if(currentKeyStates[SDL_SCANCODE_W] && rect.y >= 200)
    {
        rect.y--;
    }

    if(currentKeyStates[SDL_SCANCODE_A] && rect.x >= 1)
    {
        rect.x--;
    }

    if(currentKeyStates[SDL_SCANCODE_S] && rect.y <= 310)
    {
        rect.y++;
    }

    if(currentKeyStates[SDL_SCANCODE_D] && rect.x <= 800)
    {
        rect.x++;
    }
}

Sho::~Sho()
{
    //dtor
}
