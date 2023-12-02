
#include <raylib.h>
int main(void)
{

    InitWindow(1280 ,720, "2D Platformer");
    SetTargetFPS(600);

    while (!WindowShouldClose())
    {
        
        ClearBackground(RAYWHITE);
        
        DrawText("2d Platformer",GetScreenWidth()/2,GetScreenHeight()/2,20,ORANGE);
        
        EndDrawing();
    }
    
    CloseWindow();
    
    return 0;
}
//
