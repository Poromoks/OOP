#include "Shapes.h"

Shapes::Shapes() {
    x = rand() % 800 + 1;
    y = rand() % 600 + 1;
    dx = rand() % 3 - 1;
    dy = rand() % 3 - 1;
    if ((dx == 0 and dy == 0) || (dx != 0 and dy != 0)) {
        int* v = new int; 
        *v = rand() % 2;
        if (v == 0) {
            dx = 1;
            dy = 0;
        }
        else {
            dx = 0;
            dy = 1;
        }
        delete v;
    }
    moveSpeed = rotateSpeed = 1;
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
    if (x > 800)
        dx = -dx;
    if (y > 600)
        dy = -dy;
    if (x < 0) 
        dx = -dx;
    if (y < 0)
        dy = -dy;
    x += dx * moveSpeed;
    y += dy * moveSpeed;
}

CircleShape Point::GetPoint() const {
    return *point;
}

RectangleShape Segment::GetSegment() const{
    return *segment;
}

CircleShape Circle::GetCircle() const {
    return *circle;
}

RectangleShape Rectangle::GetRectangle() const {
    return *rectangle;
}

CircleShape Triangle::GetTriangle() const {
    return *triangle;
}

CircleShape Ellipse::GetEllipse() const {
    return *ellipse;
}

CircleShape Rhombus::GetRhombus() const {
    return *rhombus;
}