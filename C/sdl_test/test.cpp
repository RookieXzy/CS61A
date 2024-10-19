#include <SDL2/SDL.h>
#include <SDL2/SDL_audio.h>

#undef main
int main(void)
{
    //��ʼ��
    if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO) < 0)
    {
        SDL_Log("Init failed: %s", SDL_GetError());
        return -1;
    }
    //����һ������
    SDL_Window *win = SDL_CreateWindow("Hello", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 600, 400, 0);
    if (NULL == win)
    {
        SDL_Log("Create window failed: %s", SDL_GetError());
        return -1;
    }

    //��ͣһ��ʱ��

    //���ٴ���
    SDL_DestroyWindow(win);


    SDL_Quit();
}