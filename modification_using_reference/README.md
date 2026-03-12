# Product Management (C++)

A lightweight C++ program demonstrating the use of data structures and pass-by-reference to manage and modify a product's price, quantity, and discount state.

## Overview

This program tracks and updates the inventory state of a store item. It relies on a struct-based approach where helper functions modify the original data structure directly by taking it as a reference parameter, avoiding unnecessary copying in memory.

### Logic Flow

The product manipulation follows three simple rules:

1. **Initialization:** A `Product` struct is instantiated with initial values for name, price, and quantity.
2. **Reference Modification:** Helper functions take the product by reference (`Product&`), allowing direct updates to its price and quantity fields.
3. **Discount Calculation:** The discount is applied using the following formula: $\text{New Price} = \text{Price} \times \left(1 - \frac{\text{Discount}}{100}\right)$.

## Code Structure

Here is the core data structure and an example modifier function:

```cpp
struct Product {
    std::string name;
    double price;
    int quanitity;
};

void applyDiscount(Product& product, int discount) {
    double discountPercent = 1 - ((double)discount / 100);
    product.price *= discountPercent;
    std::cout << "Applied " << discount << "% discount. New price " << product.price << std::endl;
}
```

## How to Run

1. Clone this repository to your local machine.
2. Compile the code using a standard C++ compiler:
   ```bash
   g++ main.cpp -o modification_using_reference
   ```
3. Run the executable:
   ```bash
   ./modification_using_reference
   ```
