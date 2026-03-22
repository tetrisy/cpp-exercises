# Order Tracking System (C++)

A C++ program demonstrating state management and transition validation by simulating the lifecycle of an e-commerce order.

## Overview

This program tracks the status of a simulated order using an enumerated type (`OrderState`). It relies on a controlled approach where functions validate state changes against a predefined workflow, ensuring the order progresses logically from creation to delivery or cancellation.

### Logic Flow

The `changeStatus(current, n)` function follows three simple rules:

1. **Terminal Case:** If the current status is `CANCELED` or `DELIVERED`, reject any further changes.
2. **Validation Step:** Use `allowedToChange(current, n)` to verify if the requested transition is permitted from the current state.
3. **State Update:** Apply the new status if valid; otherwise, output an error message preventing the illegal transition.

## Code Structure

Here is the core state transition function:

```cpp
bool changeStatus(OrderState& current, OrderState n) {
    if (current == OrderState::CANCELED) {
        std::cout << "Error! Order has been canceled and can't be changed." << std::endl;
        return false;
    }

    if (current == OrderState::DELIVERED) {
        std::cout << "Error! Order has been already delivered." << std::endl;
        return false;
    }

    if (!allowedToChange(current, n)) {
        std::cout << "Error! You can't go from " << statusToText(current) << " to " << statusToText(n) << std::endl;
        return false;
    }

    if (allowedToChange(current, n)) {
        std::cout << "Status changed!" << statusToText(current) << " -> " << statusToText(n) << std::endl << std::endl;
        current = n;
        return true;
    } else {
        std::cout << "Error! Unallowed transition!" << std::endl << std::endl;
        return false;
    }
}
```

## How to Run

1. Clone this repository to your local machine.
2. Compile the code using a standard C++ compiler:
   ```bash
   g++ main.cpp -o order_status
   ```
3. Run the executable:
   ```bash
   ./order_status
   ```
