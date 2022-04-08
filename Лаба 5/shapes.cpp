#include "Shapes.h"

Shapes::Shapes() {
    x = rand() % 800 + 1;
    y = rand() % 600 + 1;
    dx = rand() % 3 - 1;
    dy = rand() % 3 - 1;
    if ((dx == 0 and dy == 0) || (dx != 0 and dy != 0)) {
        int v = rand() % 2;
        if (v == 0) {
            dx = 1;
            dy = 0;
        }
        else {
            dx = 0;
            dy = 1;
        }
    }
    moveSpeed = rotateSpeed = 5;
    buffer.loadFromFile("sounds/bwonk.ogg");
    bwonk.setBuffer(buffer);
}

Point::Point() {
    point = new CircleShape(5);
    point->setFillColor(Color(rand() % 255 + 1, rand() % 255 + 1, rand() % 255 + 1));
    point->setPosition(x, y);
    point->setOrigin(5, 5);
}

Segment::Segment() {
    segment = new RectangleShape(Vector2f(100, 10));
    segment->setFillColor(Color(rand() % 255 + 1, rand() % 255 + 1, rand() % 255 + 1));
    segment->setPosition(x, y);
    segment->setOrigin(50, 5);
}

Circle::Circle() {
    circle = new CircleShape(10);
    circle->setFillColor(Color(rand() % 255 + 1, rand() % 255 + 1, rand() % 255 + 1));
    circle->setPosition(x, y);
    circle->setOrigin(10, 10);
}

Rectangle::Rectangle() {
    rectangle = new RectangleShape(Vector2f(100, 50));
    rectangle->setFillColor(Color(rand() % 255 + 1, rand() % 255 + 1, rand() % 255 + 1));
    rectangle->setPosition(x, y);
    rectangle->setOrigin(50, 25);
}

Triangle::Triangle() {
    triangle = new CircleShape(20, 3);
    triangle->setFillColor(Color(rand() % 255 + 1, rand() % 255 + 1, rand() % 255 + 1));
    triangle->setPosition(x, y);
    triangle->setOrigin(20, 20);
}

Ellipse::Ellipse() {
    ellipse = new CircleShape(20);
    ellipse->setFillColor(Color(rand() % 255 + 1, rand() % 255 + 1, rand() % 255 + 1));
    ellipse->setPosition(x, y);
    ellipse->setOrigin(20, 20);
    ellipse->setScale(2, 1);
}

Rhombus::Rhombus() {
    rhombus = new CircleShape(20, 4);
    rhombus->setFillColor(Color(rand() % 255 + 1, rand() % 255 + 1, rand() % 255 + 1));
    rhombus->setPosition(x, y);
    rhombus->setOrigin(20, 20);
}

void Shapes::Move() {
    if (x > 800) {
        dx = -dx;
        bwonk.play();
    }
    if (y > 600) {
        dy = -dy;
        bwonk.play();
    }
    if (x < 0) {
        dx = -dx;
        bwonk.play();
    }
    if (y < 0) {
        dy = -dy;
        bwonk.play();
    }
    x += dx * moveSpeed;
    y += dy * moveSpeed;
}

Shape* Shapes::GetShape() const {
    return nullptr;
}

CircleShape* Point::GetShape() const {
    return point;
}

RectangleShape* Segment::GetShape() const {
    return segment;
}

CircleShape* Circle::GetShape() const {
    return circle;
}

RectangleShape* Rectangle::GetShape() const {
    return rectangle;
}

CircleShape* Triangle::GetShape() const {
    return triangle;
}

CircleShape* Ellipse::GetShape() const {
    return ellipse;
}

CircleShape* Rhombus::GetShape() const {
    return rhombus;
}