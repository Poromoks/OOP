#include "Shapes.h"

int main() {
    srand(time(0));

    RenderWindow window(VideoMode(800, 600), "Lab 4");
    window.setFramerateLimit(300);

    Point* points = new Point[10];
    Segment* segments = new Segment[10];
    Circle* circles = new Circle[10];
    Rectangle* rectangles = new Rectangle[10];
    Triangle* triangles = new Triangle[10];
    Ellipse* ellipses = new Ellipse[10];
    Rhombus* rhombuses = new Rhombus[10];

    while (window.isOpen()) {
        Event event;
        while (window.pollEvent(event)) {
            if (event.type == Event::Closed)
                window.close();
        }

        for (int i = 0; i < 10; i++) {
            points[i].Move();
            segments[i].Move();
            circles[i].Move();
            rectangles[i].Move();
            triangles[i].Move();
            ellipses[i].Move();
            rhombuses[i].Move();
        }

        window.clear();

        for (int i = 0; i < 10; i++) {
            window.draw(points[i].GetPoint());
            window.draw(segments[i].GetSegment());
            window.draw(circles[i].GetCircle());
            window.draw(rectangles[i].GetRectangle());
            window.draw(triangles[i].GetTriangle());
            window.draw(ellipses[i].GetEllipse());
            window.draw(rhombuses[i].GetRhombus());
        }

        window.display();
    }
    delete[] points, segments, circles, rectangles, triangles, ellipses, rhombuses;
}