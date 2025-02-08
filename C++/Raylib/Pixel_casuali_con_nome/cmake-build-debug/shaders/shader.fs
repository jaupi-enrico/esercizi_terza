#version 330

in vec2 fragTexCoord;  // Coordinate del pixel (normalizzate tra 0 e 1)
out vec4 fragColor;    // Output del colore del pixel

uniform float screenWidth;
uniform float screenHeight;

void main() {
    // Converti le coordinate normalizzate in coordinate dello schermo
    float x = fragTexCoord.x * screenWidth;
    float y = fragTexCoord.y * screenHeight;

    // Colore in base alla posizione
    if (x <= screenWidth / 2.0 && y <= screenHeight / 2.0) {
        fragColor = vec4(1.0, 0.0, 0.0, 1.0);  // Rosso
    } else if (x > screenWidth / 2.0 && y <= screenHeight / 2.0) {
        fragColor = vec4(0.0, 0.0, 1.0, 1.0);  // Blu
    } else if (x <= screenWidth / 2.0 && y > screenHeight / 2.0) {
        fragColor = vec4(1.0, 1.0, 0.0, 1.0);  // Giallo
    } else {
        fragColor = vec4(0.0, 1.0, 0.0, 1.0);  // Verde
    }
}
