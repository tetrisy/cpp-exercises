# Student Database (C++)

A lightweight C++ program demonstrating array and struct manipulation by managing a simple database of students and their grades.

## Overview

This program functions as a console-based student management system. It relies on a menu-driven approach where the user can repeatedly choose to add new student records, view the database, or calculate statistics until they choose to exit.

### Logic Flow

The database operates with the following core features:

1. **Data Storage:** Maintains a local array capable of holding up to 10 `Student` structures.
2. **Menu Operations:** Provides options to add a student, view all students in a formatted table, find a specific student by their index, display the top-performing student, or calculate the overall class average.

## Code Structure

Here is the core data structure defining a student record:

```cpp
struct Student {
    int index;
    std::string firstName;
    std::string lastName;
    std::string field;
    double average;
};
```

## How to Run

1. Clone this repository to your local machine.
2. Compile the code using a standard C++ compiler:
   ```bash
   g++ main.cpp -o student_base
   ```
3. Run the executable:
   ```bash
   ./student_base
   ```
