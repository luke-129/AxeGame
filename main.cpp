#include "raylib.h"
void MoveAxe(float &circle_pos_x, int window_width);
int main()
{
    // Window dimensions
    int window_height = 350;
    int window_width = 350;
    InitWindow(window_width, window_height, "AxeGame");
    // Circle Coordinates
    int circle_center_x = window_width / 2;
    int circle_center_y = window_height / 2;
    float circle_radius = 50.f;

    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RED);

        // Game logic begins
        DrawCircle(circle_center_x, circle_center_y, circle_radius, BLUE);
        
        if(IsKeyDown(KEY_D))
        {
           circle_center_x += 5; 
        }
        if(IsKeyDown(KEY_A))
        {
            circle_center_x -= 5;
        }

        //MoveAxe(circle_center_x, window_width);

        //Game logic ends
        EndDrawing();
    }
}

void MoveAxe(float &circle_pos_x, int window_width)
{
    if (circle_pos_x > 0)
    {
        circle_pos_x -= 0.1;
       // return circle_pos_x;
    }

    else
    {
        circle_pos_x = window_width + 50;
        //return circle_pos_x;
    }
}