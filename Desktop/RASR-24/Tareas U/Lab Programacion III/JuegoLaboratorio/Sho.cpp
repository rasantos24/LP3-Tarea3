#include "Sho.h"

Sho::Sho(SDL_Renderer* renderer)
{
    sho_standing.push_back(IMG_LoadTexture(renderer,"1.png"));
    sho_standing.push_back(IMG_LoadTexture(renderer,"2.png"));
    sho_standing.push_back(IMG_LoadTexture(renderer,"3.png"));
    sho_standing.push_back(IMG_LoadTexture(renderer,"4.png"));

    salto.push_back(IMG_LoadTexture(renderer,"jumpUp/1.png"));
    salto.push_back(IMG_LoadTexture(renderer,"jumpUp/2.png"));
    salto.push_back(IMG_LoadTexture(renderer,"jumpUp/3.png"));
    salto.push_back(IMG_LoadTexture(renderer,"jumpUp/4.png"));
    salto.push_back(IMG_LoadTexture(renderer,"jumpUp/5.png"));
    salto.push_back(IMG_LoadTexture(renderer,"jumpUp/6.png"));
    salto.push_back(IMG_LoadTexture(renderer,"jumpUp/7.png"));

    correr.push_back(IMG_LoadTexture(renderer,"walkBack/1.png"));
    correr.push_back(IMG_LoadTexture(renderer,"walkBack/2.png"));
    correr.push_back(IMG_LoadTexture(renderer,"walkBack/3.png"));
    correr.push_back(IMG_LoadTexture(renderer,"walkBack/4.png"));
    correr.push_back(IMG_LoadTexture(renderer,"walkBack/5.png"));

    pausar.push_back(IMG_LoadTexture(renderer,"pausa.png"));
    SDL_QueryTexture(pausar[0], NULL, NULL, &rect2.w, &rect2.h);
    rect2.x = 200;
    rect2.y = 150;

    SDL_QueryTexture(sho_standing[0], NULL, NULL, &rect.w, &rect.h);
    rect.x = 100;
    rect.y = 300;
    salto1 = 0;

    sal=false;
    cor=false;

    corre1 = 0;

    frame = 0;
    animacion_sho = 0;
    verde = rect.y;
}

void Sho::saltar()
{
    verde = rect.y;
    salto1 = 0;
    salto2 = 3;
    sal = true;
}

void Sho::corre()
{
    verde = rect.x;
    corre1 = 0;
    corre2 = 2;
    cor = true;
}

void Sho::draw(SDL_Renderer* renderer)
{
    if(this->pausa == false)
    {
        if(sal)
        {
            SDL_RenderCopy(renderer, salto[animacion_sho], NULL, &rect);
                if(frame%100==0)
                {
                    if(salto1<3)
                    {
                        rect.y-=50;
                        salto1++;
                    }
                    else
                    {
                        rect.y+=50;
                    }

                    animacion_sho++;
                    if(animacion_sho>=salto.size())
                        animacion_sho=0;
                }
                frame++;
                if (rect.y>=verde)
                {
                    sal = false;
                }

                if(cor)
                {
                    SDL_RenderCopy(renderer, correr[animacion_sho], NULL, &rect);
                    if(frame%100==0)
                    {
                        if(corre1<3)
                        {
                            rect.x-=30;
                            corre1++;
                        }
                        else
                        {
                            rect.x+=30;
                        }

                        animacion_sho++;
                        if(animacion_sho>=correr.size())
                            animacion_sho=0;
                    }
                    frame++;
                    if(rect.x>=verde)
                    {
                        cor = false;
                    }
                }
        }
        else
        {
            SDL_RenderCopy(renderer, sho_standing[animacion_sho], NULL, &rect);
                if(frame%100==0)
                {
                    animacion_sho++;
                    if(animacion_sho>=sho_standing.size())
                        animacion_sho=0;
                }
                frame++;
            SDL_RenderCopy(renderer,pausar[0],NULL,&rect2);
        }
    }
}

void Sho::act()
{
    const Uint8* currentKeyStates = SDL_GetKeyboardState(NULL);

    if(this->pausa == false)
    {
        if(!sal)
        {
            if(currentKeyStates[SDL_SCANCODE_W] && rect.y >= 0)
            {
                saltar();
            }
        }

        if(!cor)
        {
            if(currentKeyStates[SDL_SCANCODE_A] && rect.x >= 1)
            {
                rect.x--;
                //corre();
            }

            if(currentKeyStates[SDL_SCANCODE_D] && rect.x <= 800)
            {
                rect.x++;
                //corre();
            }
        }

        if(currentKeyStates[SDL_SCANCODE_P])
        {
            this->pausa=true;
        }

        //Correr
        if(currentKeyStates[SDL_SCANCODE_A] && currentKeyStates[SDL_SCANCODE_F] && rect.x >= 1)
        {
            rect.x-=2;
            //corre();
        }

        if(currentKeyStates[SDL_SCANCODE_D] && currentKeyStates[SDL_SCANCODE_F]  && rect.x <= 800)
        {
            rect.x+=2;
            //corre();
        }
    }

    if(currentKeyStates[SDL_SCANCODE_O])
    {
        this->pausa=false;
    }
}

Sho::~Sho()
{
    //dtor
}
