#include <iostream>
#include <iomanip>

struct Product {
    std::string name;
    double price;
    int quanitity;
};

void changePrice(Product& product, double newPrice);
void changeQuantity(Product& product, double newQuantity);
void applyDiscount(Product& product, int discount);

int main() {
    Product monitor = {"Monitor", 1000.00, 3};

    std::cout << "=== Primary state ===" << std::endl;
    std::cout << "Name: " << monitor.name << std::endl;
    std::cout << "Price: " << std::fixed << std::setprecision(2) << monitor.price << " PLN" << std::endl;
    std::cout << "Quantity: " << monitor.quanitity << std::endl << std::endl;

    std::cout << "=== After modification state ===" << std::endl;
    changePrice(monitor, 1200.00);
    changeQuantity(monitor, 7);
    applyDiscount(monitor, 10);
    std::cout << std::endl;

    std::cout << "=== Final state ===" << std::endl;
    std::cout << "Name: " << monitor.name << std::endl;
    std::cout << "Price: " << std::fixed << std::setprecision(2) << monitor.price << " PLN" << std::endl;
    std::cout << "Quantity: " << monitor.quanitity << std::endl;
    

    return 0;
}

void changePrice(Product& product, double newPrice) {
    product.price = newPrice;
    std::cout << "Changed price to " << product.price << std::endl;
}

void changeQuantity(Product& product, double newQuantity) {
    product.quanitity = newQuantity;
    std::cout << "Changed quantity to " << product.quanitity << std::endl;
}

void applyDiscount(Product& product, int discount) {
    double discountPercent = 1 - ((double)discount / 100);
    product.price *= discountPercent;
    std::cout << "Applied " << discount << "% discount. New price " << product.price << std::endl;
}
