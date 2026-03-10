# Employee Register (C++)

A lightweight C++ program demonstrating the use of nested structures and arrays to manage, display, and process employee data.

## Overview

This program maintains a small database of employees. It uses standard C++ structs to organize related data (such as personal details, job titles, and addresses), iterates through the records to calculate the total payroll, and identifies the highest-earning employee.

### Logic Flow

The program follows three primary steps:

1. **Data Initialization:** Creates and initializes an array of `Employee` structs, each containing a nested `Address` struct with predefined data.
2. **Iteration & Processing:** Loops through the employee array to print individual details. During this loop, it accumulates the total salary sum and compares salaries to find the highest earner.
3. **Summary Output:** Prints the final total accumulated salary and the specific details (name and salary) of the highest-earning employee.

## Code Structure

Here are the core data structures used to organize the information:

```cpp
struct Address {
    std::string street;
    std::string houseNumber;
    std::string city;
    std::string postCode;
};

struct Employee {
    std::string fristName;
    std::string surename;
    std::string position;
    double salary;
    Address address;
};
```

## How to Run

1. Clone this repository to your local machine.
2. Compile the code using a standard C++ compiler:
   ```bash
   g++ main.cpp -o employee_address
   ```
3. Run the executable:
   ```bash
   ./employee_address
   ```
