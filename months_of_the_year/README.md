# Month and Year Tracker (C++)

A C++ program demonstrating the use of enumerations and switch statements to manage calendar months, determine seasons, and calculate leap years.

## Overview

This program maps user input to months of the year. It utilizes strongly typed enumerations (`enum class`) to process data and displays details about a chosen month, outputs an annual calendar summary, and evaluates if a user-provided year is a leap year.

### Logic Flow

The program logic revolves around two primary concepts:

1. **Month and Season Mapping:** Uses `switch` statements to map enumerated `Months` to strings, days, and `Season` values.
2. **Leap Year Logic:** A year is a leap year if it is divisible by 4 but not by 100, _or_ if it is divisible by both 4 and 400.

## Code Structure

Here is the core logic for the leap year evaluation function:

```cpp
bool isLeapYear(int const year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 4 == 0 && year % 400 == 0)) {
        return true;
    } else {
        return false;
    }
}
```

## How to Run

1. Clone this repository to your local machine.
2. Compile the code using a standard C++ compiler:
   ```bash
   g++ main.cpp -o months_of_the_year
   ```
3. Run the executable:
   ```bash
   ./months_of_the_year
   ```
