#include <string>

#include "include/raylib.h"

void draw_pixels(int x, int y, int len_w, int len_h, Color c)
{
    for(int i = 0; i < len_h; ++i)
    {
        for(int j = 0; j < len_w; ++j)
        {
            DrawPixel(x + j, y + i, c);
        }
    }
}

int main(void)
{
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 800;
    const int screenHeight = 450;

    std::string s = "raylib ";
    s += RAYLIB_VERSION;
    s += " Hello World";

    InitWindow(screenWidth, screenHeight, s.c_str());
    SetTargetFPS(60);               // Set our game to run at 60 frames-per-second
    //--------------------------------------------------------------------------------------

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------

        //----------------------------------------------------------------------------------

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

        ClearBackground(RAYWHITE);

        DrawText("Congrats! You created your first window!", 190, 200, 20, BLACK);
        draw_pixels(100, 100, 20, 20, RED);


        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}

