# 2D Vector Operations (C++)

A lightweight C++ program demonstrating 2D mathematical vector calculations by defining a custom `Vector2D` structure and performing common geometric operations.

## Overview

This program encapsulates basic linear algebra principles into a reusable 2D vector structure. It relies on mathematical functions such as trigonometry and the Pythagorean theorem to manipulate vectors and calculate their physical properties (like length, angle, and rotation).

### Logic Flow

The `Vector2D` structure follows several core mathematical rules:

1. **Length:** Calculated using the Pythagorean theorem: $L = \sqrt{x^2 + y^2}$.
2. **Perpendicularity:** Determined by calculating the scalar (dot) product. If $x_1x_2 + y_1y_2 = 0$, the vectors are perpendicular.
3. **Rotation:** Turns the vector by a given angle $\theta$ using a 2D rotation matrix: $x' = x\cos(\theta) - y\sin(\theta)$ and $y' = x\sin(\theta) + y\cos(\theta)$.

## Code Structure

Here is the core structure featuring a few of the essential vector manipulation methods:

```cpp
struct Vector2D {
    double x;
    double y;

    double length() {
        return sqrt(x * x + y * y);
    }

    void normalize() {
        double l = length();
        if (l > 0) {
            x /= l;
            y /= l;
        }
    }

    void turn(double const degrees) {
        double rad = degrees * M_PI / 180.0;
        double tempX = x;
        double tempY = y;
        x = tempX * cos(rad) - tempY * sin(rad);
        y = tempX * sin(rad) + tempY * cos(rad);
    }
};
```

## How to Run

1. Clone this repository to your local machine.
2. Compile the code using a standard C++ compiler:
   ```bash
   g++ main.cpp -o vector_operations
   ```
3. Run the executable:
   ```bash
   ./vector_operations
   ```
