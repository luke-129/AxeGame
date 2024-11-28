#include "raylib.h"
void MoveAxe(float &circle_pos_x, int window_width);
int main()
{
    // Window dimensions
    int window_height = 500;
    int window_width = 600;
    InitWindow(window_width, window_height, "AxeGame");
    // Circle Coordinates
    int circle_center_x = window_width / 2;
    int circle_center_y = window_height / 2;
    float circle_radius = 50.f;


    // axe coordinates

    int axe_x{window_width / 2};
    int axe_y{0};

    int direction{10};

    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RED);

        // Game logic begins
        DrawCircle(circle_center_x, circle_center_y, circle_radius, BLUE);
        DrawRectangle(axe_x, axe_y, 50, 50, BLACK );
        
        if(IsKeyDown(KEY_D) && circle_center_x < window_width)
        {
           circle_center_x += 5; 
        }
        if(IsKeyDown(KEY_A) && circle_center_x > 0)
        {
            circle_center_x -= 5;
        }

        // move axe
        
        axe_y += direction;
        if(axe_y > window_height || axe_y < 0)
        {
            direction = -direction;
        }

        //Game logic ends
        EndDrawing();
    }
}

