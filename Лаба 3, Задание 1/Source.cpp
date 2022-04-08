#include <SFML/Graphics.hpp>
#include "tPoint.h"
using namespace sf;

int main()
{
    srand(time(0));

    RenderWindow window(VideoMode(800, 600), "Lab 3");

    tPoint* circles = new tPoint[100];

    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();
        }

        for (int i = 0; i < 100; i++)
        {
            circles[i].Move();
        }

        window.clear();

        for (int i = 0; i < 100; i++)
        {
            window.draw(circles[i].GetCircle());
        }

        window.display();
    }
    delete []circles;
}
