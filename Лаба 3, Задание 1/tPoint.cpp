#include "tPoint.h"

tPoint::tPoint()
{
    x = rand() % 800 + 1;
    y = rand() % 600 + 1;
    dx = -1 + rand() % 3; // ? 1 : -1;
    dy = -1 + rand() % 3; // ? 1 : -1;
    if (dx == 0 and dy == 0)
        dx = 1;
    speed = 1 + rand() % 1;
    circle = new CircleShape;
    circle->setRadius(10);
    circle->setFillColor(Color(rand() % 255, rand() % 255, rand() % 255));
    circle->setPosition(x, y);
}

void tPoint::Move()
{
    if (x + 5 > 800)
    {
        dx = -dx;
    }
    if (y + 5 > 600)
    {
        dy = -dy;
    }
    if (x < 0)
    {
        dx = -dx;
    }
    if (y < 0)
    {
        dy = -dy;
    }
    x += dx * speed;
    y += dy * speed;
    circle->setPosition(x, y);
}

CircleShape tPoint::GetCircle() const
{
    return* circle;
}