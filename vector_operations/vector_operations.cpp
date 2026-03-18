#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

struct Vector2D {
    double x;
    double y;

    void display() {
        std::cout << "[" << x << ", " << y << "]" << std::endl;
    }

    double length() {
        return sqrt(x * x + y * y);
    }

    void add(Vector2D vector) {
        x = vector.x + x;
        y = vector.y + y;
    }

    void subtract(Vector2D vector) {
        x = x - vector.x;
        y = y - vector.y;
    }

    void scale(double const scale) {
        x *= scale;
        y *= scale;
    }

    void normalize() {
        double l = length();
        if (l > 0) {
            x /= l;
            y /= l;
        }
    }

    double scalarProduct(Vector2D const value) {
        return x * value.x + y * value.y;
    }

    bool perpendicularTo(Vector2D const vector) {
        return scalarProduct(vector) == 0;
    }

    void bounce() {
        y *= -1;
    }

    double angle() {
        return atan2(y, x) * 180 / M_PI;
    }

    void turn(double const degrees) {
        double rad = degrees * M_PI / 180.0;
        double tempX = x;
        double tempY = y;
        x = tempX * cos(rad) - tempY * sin(rad);
        y = tempX * sin(rad) + tempY * cos(rad);
    }
};

Vector2D createVector(double x, double y);

int main() {
    std::cout << "=== Operations on vectors ===" << std::endl << std::endl;

    Vector2D v1 = createVector(3, 4);
    std::cout << "Vector v1: ";
    v1.display();
    std::cout << "Length v1: " << v1.length() << std::endl << std::endl;

    Vector2D v2 = createVector(1, 2);
    std::cout << "Vector v2: ";
    v2.display();
    std::cout << "Length v2: " << v2.length() << std::endl << std::endl;

    std::cout << "Scalar product v1 . v2: " << v1.scalarProduct(v2) << std::endl << std::endl;

    std::cout << "--- Adding ---" << std::endl;
    v1.add(v2);
    std::cout << "v1 + v2 = ";
    v1.display();
    std::cout << std::endl;

    std::cout << "--- Subtracting ---" << std::endl;
    v1.subtract(v2);
    std::cout << "v1 - v2 = ";
    v1.display();
    std::cout << std::endl;

    std::cout << "--- Scaling ---" << std::endl;
    v2.scale(3);
    std::cout << "v2 * 3 = ";
    v2.display();
    std::cout << std::endl;

    std::cout << "--- Normalizing ---" << std::endl;
    v1.normalize();
    std::cout << "v1 normalized = ";
    v1.display();
    std::cout << "Length: " << v1.length() << std::endl << std::endl;

    std::cout << "--- Perpendicularity ---" << std::endl;
    Vector2D a = createVector(1, 0);
    Vector2D b = createVector(0, 1);
    std::cout << "a = ";
    a.display();
    std::cout << "b = ";
    b.display();
    std::cout << "Is a perpendicular to b?: " << (a.perpendicularTo(b) ? "Yes" : "No") << std::endl << std::endl;

    Vector2D c = createVector(1, 1);
    std::cout << "c = ";
    c.display();
    std::cout << "Is a perpendicular to c?: " << (a.perpendicularTo(c) ? "Yes" : "No") << std::endl << std::endl;

    std::cout << "--- Bouncing X axis ---" << std::endl;
    Vector2D v3 = createVector(5, 8);
    std::cout << "v3 = ";
    v3.display();
    v3.bounce();
    std::cout << "bounced v3 = ";
    v3.display();
    std::cout << std::endl;

    std::cout << "--- V3 angle ---" << std::endl;
    std::cout << "v3 = ";
    v3.display();
    v3.bounce();
    std::cout << "v3 angle = " << std::fixed << std::setprecision(2) << v3.angle() << "°" << std::endl << std::endl;
    std::cout << std::defaultfloat;

    std::cout << "--- Turn vector ---" << std::endl;
    Vector2D v4 = createVector(2, 5);
    std::cout << "v4 = ";
    v4.display();
    v4.turn(20);
    std::cout << "Turned v4 = ";
    v4.display();
    std::cout << std::endl;


    return 0;
}

Vector2D createVector(double x, double y) {
    Vector2D v;
    v.x = x;
    v.y = y;

    return v; 
}
