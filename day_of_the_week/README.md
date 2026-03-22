# Weekday Analyzer (C++)

A lightweight C++ program demonstrating the use of strongly-typed enumerations (`enum class`) to map integer inputs to days of the week and evaluate weekend status.

## Overview

This program prompts the user for a number corresponding to a day of the week (1-7). It utilizes a `WeekDay` enum to manage the days, validates the user's input, outputs the name of the chosen day, and calculates how many days are left until the weekend if the chosen day is a working day.

### Logic Flow

The program's execution follows these core steps:

1. **Input Validation:** Safely reads user input, ensuring it is a valid integer between 1 and 7 while handling invalid data types.
2. **Enum Casting:** Casts the validated integer to the `WeekDay` enum class using `static_cast`.
3. **Evaluation:** Uses helper functions `dayToText()` to stringify the enum and `isWeekend()` to determine if the day is Saturday or Sunday.
4. **Calculation:** If the day is a weekday, calculates the days remaining until the weekend using simple arithmetic.

## Code Structure

Here is the core enumeration and a helper function used in the program:

```cpp
enum class WeekDay {
    MONDAY = 1,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATRUDAY,
    SUNDAY,
};

bool isWeekend(WeekDay const day) {
    if (day == WeekDay::SATRUDAY || day == WeekDay::SUNDAY) {
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
   g++ main.cpp -o day_of_the_week
   ```
3. Run the executable:
   ```bash
   ./day_of_the_week
   ```
