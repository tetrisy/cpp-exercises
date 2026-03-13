# Point Geometry Utility (C++)

A lightweight C++ program demonstrating 2D coordinate manipulation by calculating midpoints, computing distances, and translating points in a 2D plane.

## Overview

This program defines a basic spatial `Point` structure. It relies on standard mathematical geometry formulas to calculate the distance and midpoint between two points, and utilizes pass-by-reference functions to shift a point's coordinates along the X and Y axes.

### Logic Flow

The geometric calculations follow two core mathematical rules:

1. **Midpoint:** The midpoint is found by averaging the corresponding coordinates: $M = (\frac{x_1 + x_2}{2}, \frac{y_1 + y_2}{2})$.
2. **Distance:** The Euclidean distance between two points is calculated using the Pythagorean theorem: $d = \sqrt{(x_2 - x_1)^2 + (y_2 - y_1)^2}$.

## Code Structure

Here is the core distance calculation function:

```cpp
double calculateDistance(Point const& pointA, Point const& pointB) {
    double dx = pointB.x - pointA.x;
    double dy = pointB.y - pointA.y;
    return sqrt(dx * dx + dy * dy);
}
```

## How to Run

1. Clone this repository to your local machine.
2. Compile the code using a standard C++ compiler:
   ```bash
   g++ main.cpp -o creating_point
   ```
3. Run the executable:
   ```bash
   ./creating_point
   ```
