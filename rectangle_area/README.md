# Rectangle Calculator (C++)

A lightweight C++ program demonstrating the use of structs and pointers to calculate the area and perimeter of given rectangles.

## Overview

This program calculates the geometric properties of a rectangle. It relies on a structured approach where a `Rectangle` struct holds the dimensions, and helper functions receive a pointer to the struct to perform calculations efficiently without copying data.

### Logic Flow

The calculations follow two simple rules based on the properties of a rectangle:

1. **Area:** Returns the product of the rectangle's width and height.
2. **Perimeter:** Returns the sum of twice the width and twice the height.

## Code Structure

Here is the core struct and calculation functions:

```cpp
struct Rectangle {
    double width;
    double height;
};

double calculateArea(Rectangle* rect) {
    return rect->width * rect->height;
};

double calculatePerimeter(Rectangle* rect) {
    return (rect->width * 2) + (rect->height * 2);
};
```

## How to Run

1. Clone this repository to your local machine.
2. Compile the code using a standard C++ compiler:
   ```bash
   g++ main.cpp -o rectangle_area
   ```
3. Run the executable:
   ```bash
   ./rectangle_area
   ```
