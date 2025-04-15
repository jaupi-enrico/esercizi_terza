#include <bits/stdc++.h>

#include "include/raylib.h"

struct Carta {
    int pos_x;
    int pos_y;
    int seme;
    int valore;
    Rectangle r;
    Texture2D *carte;
};

void disegna_carta(const Carta &c) {
    Rectangle destination;
    destination.x = c.pos_x;
    destination.y = c.pos_y;
    destination.width = c.r.width;
    destination.height = c.r.height;
    DrawTexturePro(*c.carte, c.r, destination, {}, 0, WHITE);
}

int main(void)
{
    std::cout << "Prova";
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 1920;
    const int screenHeight = 980;

    std::string s = "raylib ";
    s += RAYLIB_VERSION;
    s += " Hello World";

    InitWindow(screenWidth, screenHeight, s.c_str());

    Texture2D immagine = LoadTexture("../assets/deck.png");

    Carta c;
    c.pos_x = 25;
    c.pos_y = 20;
    c.seme = 1;
    c.valore = 1;
    c.r.x = 170;
    c.r.y = 15;
    c.r.width = 125;
    c.r.height = 172;
    c.carte = &immagine;

    std::vector<Carta> mazzo;
    for (int i = 0; i < 52; ++i) {
        Carta d = c;
        d.pos_x += c.pos_x + 140 * (i % 13);
        d.pos_y += c.pos_y + 200 * (i/13);
        d.r.x = 173 + (c.r.width + 14) * (i % 13);
        d.r.y = 35 + (190 * (i / 13));
        mazzo.push_back(d);
    }

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

        ClearBackground(DARKGREEN);

        for (int i = 0; i < mazzo.size(); ++i) {
            disegna_carta(mazzo.at(i));
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

