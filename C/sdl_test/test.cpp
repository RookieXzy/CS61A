#include <SDL2/SDL.h>
#include <SDL2/SDL_audio.h>

#undef main
int main(void)
{
    //初始化
    if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO) < 0)
    {
        SDL_Log("Init failed: %s", SDL_GetError());
        return -1;
    }
    //创建一个窗口
    SDL_Window *win = SDL_CreateWindow("Hello", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 600, 400, 0);
    if (NULL == win)
    {
        SDL_Log("Create window failed: %s", SDL_GetError());
        return -1;
    }

    //暂停一段时间

    //销毁窗口
    SDL_DestroyWindow(win);


    SDL_Quit();
}