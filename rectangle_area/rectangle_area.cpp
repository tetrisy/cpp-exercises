#include <iostream>

struct Rectangle {
    double width;
    double height;
};

double calculateArea(Rectangle* rect);
double calculatePerimeter(Rectangle* rect);

int main() {
    Rectangle rect1 = {5, 3};
    std::cout << "Rectangle 1: " << rect1.width << "x" << rect1.height << std::endl;
    std::cout << "  Area: " << calculateArea(&rect1) << std::endl;
    std::cout << "  Permieter: " << calculatePerimeter(&rect1) << std::endl << std::endl;
    Rectangle rect2 = {10, 15};
    std::cout << "Rectangle 2: " << rect2.width << "x" << rect2.height << std::endl;
    std::cout << "  Area: " << calculateArea(&rect2) << std::endl;
    std::cout << "  Permieter: " << calculatePerimeter(&rect2) << std::endl << std::endl;
    Rectangle rect3 = {4, 6};
    std::cout << "Rectangle 3: " << rect3.width << "x" << rect3.height << std::endl;
    std::cout << "  Area: " << calculateArea(&rect3) << std::endl;
    std::cout << "  Permieter: " << calculatePerimeter(&rect3) << std::endl << std::endl;

    return 0;
}

double calculateArea(Rectangle* rect) {
    return rect->width * rect->height;
};

double calculatePerimeter(Rectangle* rect) {
    return (rect->width * 2) + (rect->height * 2);
};
