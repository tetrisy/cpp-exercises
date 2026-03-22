#include <iostream>
using namespace std;

enum class OrderState {
    NEW,
    PAID,
    IN_PREPARATION,
    SENT,
    DELIVERED,
    CANCELED
};

std::string statusToText(OrderState status) {
    switch(status) {
        case OrderState::NEW: return "NEW";
        case OrderState::PAID: return "PAID";
        case OrderState::IN_PREPARATION: return "IN PREPARATION";
        case OrderState::SENT: return "SENT";
        case OrderState::DELIVERED: return "DELIVERED";
        case OrderState::CANCELED: return "CANCELED";
    }
}

bool allowedToChange(OrderState const current, OrderState const n) {
    if(current == OrderState::NEW) {
        if (n == OrderState::CANCELED || n == OrderState::PAID) {
            return true;
        } else {
            return false;
        }
    }
    if(current == OrderState::PAID) {
        if (n == OrderState::IN_PREPARATION) {
            return true;
        } else {
            return false;
        }
    }
    if(current == OrderState::IN_PREPARATION) {
        if (n == OrderState::CANCELED || n == OrderState::SENT) {
            return true;
        } else {
            return false;
        }
    }
    if(current == OrderState::SENT) {
        if (n == OrderState::DELIVERED) {
            return true;
        } else {
            return false;
        }
    }
}

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


int main() {
    std::cout << "=== ORDER TRACKING SYSTEM ===" << std::endl << std::endl;
    OrderState order0001 = OrderState::NEW;
    std::cout << "Order #0001 has been created" << std::endl;
    std::cout << "Status: " << statusToText(order0001) << std::endl << std::endl;

    int choice;

        do {
        std::cout << "--- Menu ---" << std::endl;
        std::cout << "1. Mark as paid" << std::endl;
        std::cout << "2. Start preparing" << std::endl;
        std::cout << "3. Sent" << std::endl;
        std::cout << "4. Confirm delivery" << std::endl;
        std::cout << "5. Cancel" << std::endl;
        std::cout << "0. Exit" << std::endl << std::endl;
        std::cout << "Choose option: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                changeStatus(order0001, OrderState::PAID);
                break;
            case 2:
                changeStatus(order0001, OrderState::IN_PREPARATION);
                break;
            case 3:
                changeStatus(order0001, OrderState::SENT);
                break;
            case 4:
                changeStatus(order0001, OrderState::DELIVERED);
                break;
            case 5:
                changeStatus(order0001, OrderState::CANCELED);
                break;
            case 0:
                return 0;
            default:
                std::cout << "Unknown operation!" << std::endl;
        }
    } while (true);

    return 0;
}

