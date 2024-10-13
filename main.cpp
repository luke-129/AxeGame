#include "raylib.h"

int main()
{
    int height = 350;
    int width = 350;
    InitWindow(width, height, "AxeGame");

    while (true)
    {
        BeginDrawing();
        ClearBackground(RED);
        EndDrawing();
    }
}

