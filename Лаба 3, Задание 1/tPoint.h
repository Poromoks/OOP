#include <SFML/Graphics.hpp>
using namespace sf;

class tPoint
{
public:
    tPoint();
    void Move();
    CircleShape GetCircle() const;

private:
    int x, y, dx, dy, speed;
    CircleShape* circle;
};