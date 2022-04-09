#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

using namespace sf;

class Shapes {
public:
    Shapes(int MoveSpeed = 5, int RotateSpeed = 5);
    virtual void Move();
    virtual Shape* GetShape() const;

protected:
    int x, y, dx, dy, moveSpeed, rotateSpeed;
    SoundBuffer buffer;
    Sound bwonk;
};

class Point : public Shapes {
public:
    Point();
    void Move() override {
        Shapes::Move();
        point->setPosition(x, y);
        point->rotate(rotateSpeed);
    };
    CircleShape* GetShape() const override;

private:
    CircleShape* point;
};

class Segment : public Shapes {
public:
    Segment();
    void Move() override {
        Shapes::Move();
        segment->setPosition(x, y);
        segment->rotate(rotateSpeed);
    };
    RectangleShape* GetShape() const override;

private:
    RectangleShape* segment;
};

class Circle : public Shapes {
public:
    Circle();
    void Move() override {
        Shapes::Move();
        circle->setPosition(x, y);
        circle->rotate(rotateSpeed);
    };
    CircleShape* GetShape() const override;

private:
    CircleShape* circle;
};

class Rectangle : public Shapes {
public:
    Rectangle();
    void Move() override {
        Shapes::Move();
        rectangle->setPosition(x, y);
        rectangle->rotate(rotateSpeed);
    };
    RectangleShape* GetShape() const override;

private:
    RectangleShape* rectangle;
};

class Triangle : public Shapes {
public:
    Triangle();
    void Move() override {
        Shapes::Move();
        triangle->setPosition(x, y);
        triangle->rotate(rotateSpeed);
    };
    CircleShape* GetShape() const override;

private:
    CircleShape* triangle;
};

class Ellipse : public Shapes {
public:
    Ellipse();
    void Move() override {
        Shapes::Move();
        ellipse->setPosition(x, y);
        ellipse->rotate(rotateSpeed);
    };
    CircleShape* GetShape() const override;

private:
    CircleShape* ellipse;
};

class Rhombus : public Shapes {
public:
    Rhombus();
    void Move() override {
        Shapes::Move();
        rhombus->setPosition(x, y);
        rhombus->rotate(rotateSpeed);
    };
    CircleShape* GetShape() const override;

private:
    CircleShape* rhombus;
};