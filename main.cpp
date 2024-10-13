#include "raylib.h"

int main()
{
   int width = 350;
   int height = 350;

   InitWindow(width, height, "AxeGame");

   while (true)
   {
        BeginDrawing();
        ClearBackground(RED);
        EndDrawing();
   } 
}