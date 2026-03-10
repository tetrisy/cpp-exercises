# Book Library Manager (C++)

A lightweight C++ program demonstrating the use of structs, arrays, and formatted console output by managing and analyzing a predefined collection of books.

## Overview

This program initializes a library of books and processes the data to extract meaningful statistics. It relies on standard iteration to format the output into a readable table, calculate average costs, and filter the collection based on specific criteria.

### Logic Flow

The program executes four main operations:

1. **Tabular Display:** Iterates through the book array to print a structured table using `<iomanip>` utilities like `std::setw` and `std::left`.
2. **Maximum Value Search:** Compares each book's price iteratively to find and display the most expensive book.
3. **Average Calculation:** Accumulates the total price of all books and divides it by the total count to determine the average price.
4. **Conditional Filtering:** Checks the `releaseYear` of each book and lists only those published after $2015$.

## Code Structure

Here is the core data structure used to represent each item in the library:

```cpp
struct Book {
    std::string title;
    std::string author;
    double price;
    int releaseYear;
};
```

## How to Run

1. Clone this repository to your local machine.
2. Compile the code using a standard C++ compiler:
   ```bash
   g++ main.cpp -o book_library
   ```
3. Run the executable:
   ```bash
   ./book_library
   ```
