#include <iostream>
#include <cmath>

struct Point {
    double x;
    double y; 
};

Point createPoint(double x, double y);
Point calculateMidPoint(Point const& point, Point const& pointB);
double calculateDistance(Point const& pointA, Point const& pointB);
void movePointX(Point& point, int value);
void movePointY(Point& point, int value);

int main() {
    Point pointA = createPoint(0, 0);
    Point pointB = createPoint(6, 8);

    std::cout << "Point A: (" << pointA.x << ", " << pointA.y << ")" << std::endl; 
    std::cout << "Point B: (" << pointB.x << ", " << pointB.y << ")" << std::endl << std::endl;

    Point midPointAB = calculateMidPoint(pointA, pointB);
    std::cout << "Midpoint AB: (" << midPointAB.x << ", " << midPointAB.y << ")" << std::endl;

    double distanceAB = calculateDistance(pointA, pointB);
    std::cout << "Distance A-B: " << distanceAB << std::endl << std::endl; 

    Point pointC = createPoint(3, 4);

    std::cout << "Point C: (" << pointC.x << ", " << pointC.y << ")" << std::endl; 
    Point midPointAC = calculateMidPoint(pointA, pointC);
    std::cout << "Midpoint AC: (" << midPointAC.x << ", " << midPointAC.y << ")" << std::endl;
    double distanceAC = calculateDistance(pointA, pointC);
    std::cout << "Distance A-C: " << distanceAC << std::endl << std::endl; 

    movePointX(pointA, 4);
    movePointY(pointA, 1);
    std::cout << "Point A: (" << pointA.x << ", " << pointA.y << ")" << std::endl; 
    
    return 0;
}

Point createPoint(double x, double y) {
    Point point;
    point.x = x;
    point.y = y;
    return point;
}

Point calculateMidPoint(Point const& pointA, Point const& pointB) {
    Point midPoint;
    midPoint.x = (pointA.x + pointB.x) / 2;
    midPoint.y = (pointA.y + pointB.y) / 2;

    return midPoint;
}

double calculateDistance(Point const& pointA, Point const& pointB) {
    double dx = pointB.x - pointA.x;
    double dy = pointB.y - pointA.y;
    return sqrt(dx * dx + dy * dy);
}

void movePointX(Point& point, int value) {
    point.x += value;
}

void movePointY(Point& point, int value) {
    point.y += value;
}
