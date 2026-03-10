# Geometric Calculations (C++)

A lightweight C++ program demonstrating basic 2D geometry by calculating the distance and midpoint between two coordinate points.

## Overview

This program calculates the distance and the midpoint of a line segment defined by two points (Point A and Point B). It relies on a custom `Point` struct to hold the $x$ and $y$ values and uses standard algebraic formulas.

### Logic Flow

The calculations follow two standard mathematical rules:

1. **Distance:** Uses the Euclidean distance formula: $d = \sqrt{(x_2 - x_1)^2 + (y_2 - y_1)^2}$.
2. **Midpoint:** Calculated by averaging the corresponding coordinates, resulting in $(\frac{x_1 + x_2}{2}, \frac{y_1 + y_2}{2})$.

## Code Structure

Here is the core data structure and calculation logic:

```cpp
struct Point {
    double x;
    double y;
};

// ... inside main() ...
double distanceBetween = sqrt(pow(pointB.x - pointA.x, 2) + pow(pointB.y - pointA.y, 2));

Point midpoint;
midpoint.x = (pointA.x + pointB.x) / 2;
midpoint.y = (pointA.y + pointB.y) / 2;
```

## How to Run

1. Clone this repository to your local machine.
2. Compile the code using a standard C++ compiler:
   ```bash
   g++ main.cpp -o 2d_point
   ```
3. Run the executable:
   ```bash
   ./2d_point
   ```
