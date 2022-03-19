#define s_width 80
#define s_height 80
#include "Fazen.hpp"

int main()
{
    Fazen2d game;
    game.make2DConsole();
    float x = 20;
    float y = 30;
    short c = whiteF;
    float vx = 0.05;
    float vy = 0.03;
    game.background(redB);
    while (1)
    {
        x = game.Mouse_X();
        y = game.Mouse_Y();

        game.drawRectangle(x, y, 10, 10, 0, c);
        if (x + 10 > s_width - 3)
        {
            c = greenF;
            vx = vx * -1;
        }
        if (y + 10 > s_height - 2)
        {
            c = greenF;
            vy = vy * -1;
        }
        if (x < 0)
        {
            c = dyellowF;
            vx = vx * -1;
        }
        if (y < 0)
        {
            c = dyellowF;
            vy = vy * -1;
        }
        game.display();
        CHECK_USER_EXIT
        // x += vx;
        // y += vy;
    }
}
