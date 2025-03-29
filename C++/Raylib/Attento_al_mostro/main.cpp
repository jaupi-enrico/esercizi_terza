#include <iostream>
#include <string>

#include "include/raylib.h"

void inizializza(const std::string &segreta, std::string& attuale) {
    attuale = "";
    for (int i = 0; i < segreta.size(); ++i) {
        attuale += '_';
    }
}

bool controlla(const std::string& segreta, char lettera,
    std::string &attuale) {
    bool trovata = false;
    for (int i = 0; i < segreta.size(); ++i) {
        if (segreta.at(i) == lettera) {
            attuale.at(i) = lettera;
            trovata = true;
        }
    }
    return trovata;
}

std::string lettere_usate(const std::string& provate) {
    std::string s;
    for (int i = 0; i < provate.size(); ++i) {
        s += provate.at(i);
        s += ", ";
    }
    return s;
}

void disegna(const Texture &immagine, int errori) {
    DrawTexture(immagine, 0, 0, WHITE);
    int w = immagine.width;
    int h = immagine.height;
    for (int i = errori; i < 9; ++i) {
        DrawRectangle((i % 3) * (w / 3), (i / 3) * (h / 3), w / 3, h/3, WHITE);
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

    const int MAX_ERRORI = 6;
    int conta_errori = 0;
    int caso = 0;
    std::string provate, attuale;

    std::string segreta = "armadio";
    std::string vinto = "Hai vinto!";
    std::string perso = "Hai perso!";
    inizializza(segreta, attuale);

    InitWindow(screenWidth, screenHeight, s.c_str());
    SetTargetFPS(60);               // Set our game to run at 60 frames-per-second
    //--------------------------------------------------------------------------------------

    // Main game loop
    while (!WindowShouldClose() && conta_errori < MAX_ERRORI)    // Detect window close button or ESC key
    {

        // Update
        //----------------------------------------------------------------------------------
        char lettera = GetCharPressed();
        if (lettera > 0) {
            std::cout << lettera;
            if (!controlla(segreta, lettera, attuale)) {
                conta_errori++;
            }
            if (segreta == attuale) {
                caso = 1;
            }
        }


        //----------------------------------------------------------------------------------

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

        ClearBackground(RAYWHITE);

        switch (caso) {
            case (0) : {
                DrawText(attuale.c_str(), 20, 350, 60, BLACK);
                break;
            }
            case (1) : {
                DrawText(vinto.c_str(), 20, 350, 60, BLACK);
                break;
            }
            case (2) : {
                DrawText(perso.c_str(), 20, 350, 60, BLACK);
                break;
            }
            default : {
                break;
            }
        }



        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}

