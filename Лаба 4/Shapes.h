#include <SFML/Graphics.hpp>

using namespace sf;

class Shapes {
public:
    Shapes();
    void Move();

protected:
    int x, y, dx, dy, moveSpeed, rotateSpeed;
};

class Point : public Shapes {
public:
    Point();
    void Move() {
        Shapes::Move();
        point->setPosition(x, y);
        point->rotate(rotateSpeed);
    };
    CircleShape GetPoint() const;

private:
    CircleShape* point;
};

class Segment : public Shapes {
public:
    Segment();
    void Move() {
        Shapes::Move();
        segment->setPosition(x, y);
        segment->rotate(rotateSpeed);
    };
    RectangleShape GetSegment() const;

private:
    RectangleShape* segment;
};

class Circle : public Shapes {
public:
    Circle();
    void Move() {
        Shapes::Move();
        circle->setPosition(x, y);
        circle->rotate(rotateSpeed);
    };
    CircleShape GetCircle() const;

private:
    CircleShape* circle;
};

class Rectangle : public Shapes {
public:
    Rectangle();
    void Move() {
        Shapes::Move();
        rectangle->setPosition(x, y);
        rectangle->rotate(rotateSpeed);
    };
    RectangleShape GetRectangle() const;

private:
    RectangleShape* rectangle;
};

class Triangle : public Shapes {
public:
    Triangle();
    void Move() {
        Shapes::Move();
        triangle->setPosition(x, y);
        triangle->rotate(rotateSpeed);
    };
    CircleShape GetTriangle() const;

private:
    CircleShape* triangle;
};

class Ellipse : public Shapes {
public:
    Ellipse();
    void Move() {
        Shapes::Move();
        ellipse->setPosition(x, y);
        ellipse->rotate(rotateSpeed);
    };
    CircleShape GetEllipse() const;

private:
    CircleShape* ellipse;
};

class Rhombus : public Shapes {
public:
    Rhombus();
    void Move() {
        Shapes::Move();
        rhombus->setPosition(x, y);
        rhombus->rotate(rotateSpeed);
    };
    CircleShape GetRhombus() const;

private:
    CircleShape* rhombus;
};