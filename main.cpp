#include "raylib.h"

int main()
{
    int height = 350;
    int width = 350;
    InitWindow(width, height, "AxeGame");
    int circle_center_x = width / 2;
    int circle_center_y = height / 2;
    float circle_radius = 50.f;
    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RED);
        DrawCircle(circle_center_x, circle_center_y, circle_radius, BLUE);
        EndDrawing();
    }
}

