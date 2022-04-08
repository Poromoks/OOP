#include "Shapes.h"
#include <vector>

using namespace std;

int main() {
    srand(time(0));

    RenderWindow window(VideoMode(800, 600), "Lab 5");
    window.setFramerateLimit(60);
    
    vector <Shapes*> shapes;

    for (int i = 0; i < 10; i++) {
        shapes.push_back(new Point);
        shapes.push_back(new Segment);
        shapes.push_back(new Circle);
        shapes.push_back(new Rectangle);
        shapes.push_back(new Triangle);
        shapes.push_back(new Ellipse);
        shapes.push_back(new Rhombus);
    }

    while (window.isOpen()) {
        Event event;
        while (window.pollEvent(event)) {
            if (event.type == Event::Closed)
                window.close();
        }

        for (const auto& shape : shapes) {
            shape->Move();
        }

        window.clear();

        for (const auto& shape : shapes) {
            window.draw(*shape->GetShape());
        }

        window.display();
    }
}