# Person Details Array (C++)

A lightweight C++ program demonstrating the use of structs, arrays, and basic iteration by storing, displaying, and analyzing personal data.

## Overview

This program manages a small collection of `Person` records. It relies on a custom data structure to group related attributes (name, age, and height) and uses loops to process the array elements, ultimately determining who the oldest person in the group is.

### Logic Flow

The program's execution follows three simple rules:

1. **Initialization:** Creates an array of three `Person` structs populated with predefined data.
2. **Display Iteration:** Loops through the array, passing each record to a helper function to print their individual details.
3. **Find Oldest:** Iterates through the array a second time, comparing the `age` property of each record to isolate and display the oldest person.

## Code Structure

Here is the core data structure used to build the records:

```cpp
struct Person {
    std::string name;
    int age;
    double height;
};

void displayPerson(Person person);
```

## How to Run

1. Clone this repository to your local machine.
2. Compile the code using a standard C++ compiler:
   ```bash
   g++ main.cpp -o person_struct_dispaly
   ```
3. Run the executable:
   ```bash
   ./person_struct_dispaly
   ```
