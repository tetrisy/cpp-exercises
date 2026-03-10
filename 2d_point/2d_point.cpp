#include <iostream>
#include <cmath>

struct Point {
    double x;
    double y;
};

int main() {
    Point pointA = {1.0, 2.0};
    Point pointB = {4.0, 6.0};

    double distanceBetween;
    distanceBetween = sqrt(pow(pointB.x - pointA.x, 2) + pow(pointB.y - pointA.y, 2));
    
    Point midpoint;
    midpoint.x = (pointA.x + pointB.x) / 2;
    midpoint.y = (pointA.y + pointB.y) / 2;

    std::cout << "=== Geometric calculations ===" << std::endl;
    std::cout << "Point A: {" << pointA.x << ", " << pointA.y << "}" << std::endl;
    std::cout << "Point B: {" << pointB.x << ", " << pointB.y << "}" << std::endl;
    std::cout << "Distance A-B: " << distanceBetween << std::endl;
    std::cout << "Midpoint: {" << midpoint.x << ", " << midpoint.y << "}\n" << std::endl;

    return 0;
}
