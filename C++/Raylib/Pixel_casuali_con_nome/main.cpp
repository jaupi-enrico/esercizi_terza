#include <string>

#include "include/raylib.h"

void draw_pixels(const int screenWidth, const int screenHeight, const long int pixels)
{
    for (long int i = 0; i < pixels; ++i)
    {
        int x = GetRandomValue(1, screenWidth);
        int y = GetRandomValue(1, screenHeight);
        if (x <= screenWidth / 2 && y <= screenHeight/2)
        {
            DrawPixel(x, y, RED);
        }
        else if (x > screenWidth / 2 && y <= screenHeight/2)
        {
            DrawPixel(x, y, BLUE);
        }
        else if (x <= screenWidth / 2 && y > screenHeight/2)
        {
            DrawPixel(x, y, YELLOW);
        }
        else if (x > screenWidth / 2 && y > screenHeight/2)
        {
            DrawPixel(x, y, GREEN);
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
    s += " [core] example - basic window";

    InitWindow(screenWidth, screenHeight, s.c_str());
    //SetTargetFPS(60);               // Set our game to run at 60 frames-per-second
    //--------------------------------------------------------------------------------------

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------
        // TODO: Update your variables here
        //----------------------------------------------------------------------------------

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

        ClearBackground(RAYWHITE);
        draw_pixels(screenWidth, screenHeight, 500000);
        DrawText("Enrico", screenWidth/2 - 30, screenHeight/2 - 10, 20, BLACK);
        std::string s_fps = "FPS: ";
        s_fps += std::to_string(GetFPS());
        DrawText(s_fps.c_str(), screenWidth - 50, 30, 10, BLACK);


        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}

