#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define WIDTH 500
#define HEIGHT 500

typedef struct {
    int r, g, b;
} Pixel;

Pixel image[HEIGHT][WIDTH];

void set_pixel(int x, int y, int r, int g, int b) {
    if (x >= 0 && x < WIDTH && y >= 0 && y < HEIGHT)
        image[y][x] = (Pixel){r, g, b};
}

void draw_line(int x0, int y0, int x1, int y1, int r, int g, int b) {
    int dx = abs(x1 - x0), sx = x0 < x1 ? 1 : -1;
    int dy = -abs(y1 - y0), sy = y0 < y1 ? 1 : -1;
    int err = dx + dy, e2;

    while (1) {
        set_pixel(x0, y0, r, g, b);
        if (x0 == x1 && y0 == y1) break;
        e2 = 2 * err;
        if (e2 >= dy) { err += dy; x0 += sx; }
        if (e2 <= dx) { err += dx; y0 += sy; }
    }
}

void draw_house(int x, int y, int size, int r, int g, int b) {
    // Quadrado da base
    draw_line(x, y, x + size, y, r, g, b);
    draw_line(x + size, y, x + size, y + size, r, g, b);
    draw_line(x + size, y + size, x, y + size, r, g, b);
    draw_line(x, y + size, x, y, r, g, b);

    // Telhado
    draw_line(x, y, x + size / 2, y - size / 2, r, g, b);
    draw_line(x + size / 2, y - size / 2, x + size, y, r, g, b);

    // Porta
    int px = x + size / 2 - size / 8;
    int py = y + size - size / 4;
    int pw = size / 4;
    int ph = size / 4;
    draw_line(px, py, px + pw, py, r, g, b);
    draw_line(px + pw, py, px + pw, py + ph, r, g, b);
    draw_line(px + pw, py + ph, px, py + ph, r, g, b);
    draw_line(px, py + ph, px, py, r, g, b);
}

int main() {
    for (int y = 0; y < HEIGHT; y++)
        for (int x = 0; x < WIDTH; x++)
            image[y][x] = (Pixel){255, 255, 255}; // Fundo branco

    int size = 80;
    int start_x = 100, start_y = 150;

    // Apenas a casa vermelha
    draw_house(start_x + 1 * (size + 10), start_y, size, 255, 0, 0); // vermelho

    // Escreve o arquivo PPM
    FILE *f = fopen("casas.ppm", "w");
    fprintf(f, "P3\n%d %d\n255\n", WIDTH, HEIGHT);
    for (int y = 0; y < HEIGHT; y++) {
        for (int x = 0; x < WIDTH; x++) {
            fprintf(f, "%d %d %d ", image[y][x].r, image[y][x].g, image[y][x].b);
        }
        fprintf(f, "\n");
    }
    fclose(f);

    return 0;
}
