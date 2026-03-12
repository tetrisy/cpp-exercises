# Person Details Display (C++)

A lightweight C++ program demonstrating the use of data structures and pointers by passing memory addresses to a function to print individual details.

## Overview

This program defines a `Person` structure and initializes multiple instances. It relies on a pass-by-pointer approach where the display function receives the memory address of the object, rather than creating a copy of it, allowing for efficient data access.

### Logic Flow

The `displayPreson(Person* person)` function works via the following mechanism:

1. **Address Passing:** Takes a pointer to a `Person` struct (`&p1`, `&p2`, etc.) as its argument.
2. **Member Access:** Uses the arrow operator (`->`) to dereference the pointer and access the `firstName`, `lastName`, and `age` fields at that specific memory address to print them to the console.

## Code Structure

Here is the core structure definition and the display function:

```cpp
struct Person {
    std::string firstName;
    std::string lastName;
    int age;
};

void displayPreson(Person* person) {
    std::cout << "=== Person details ===" << std::endl;
    std::cout << "First name: " << person->firstName << std::endl;
    std::cout << "Last name: " << person->lastName << std::endl;
    std::cout << "Age: " << person->age << std::endl << std::endl;
}
```

## How to Run

1. Clone this repository to your local machine.
2. Compile the code using a standard C++ compiler:
   ```bash
   g++ main.cpp -o display_person
   ```
3. Run the executable:
   ```bash
   ./display_person
   ```
