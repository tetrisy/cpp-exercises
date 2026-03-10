#include <iostream>
#include <iomanip>

struct Book {
    std::string title;
    std::string author;
    double price;
    int releaseYear;
};

int main() {
    const int NUMBER_OF_BOOKS = 5;

    Book books[NUMBER_OF_BOOKS] = {
        {"Lord of The Rings", "J.R.R. Tolkien", 59.99, 2001},
        {"Harry Potter", "J.K. Rowling", 45.00, 1997},
        {"The Witcher", "A. Sapkowski", 39.99, 2014},
        {"1984", "G. Orwell", 29.99, 2020},
        {"Pride and prejudice", "J. Austen", 34.50, 2018},
    };

    std::cout << "=== Book library ===" << std::endl;
    std::cout << std::endl << "List of all books:" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "| " << std::left << std::setw(22) << "Title" 
         << "| " << std::setw(18) << "Author" 
         << "| " << std::setw(7) << "Price" 
         << "| " << std::setw(4) << "Year" << " |" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;

    double priceSum = 0;
    for (int i = 0; i < NUMBER_OF_BOOKS; i++) {
        std::cout << "| " << std::left << std::setw(22) << books[i].title 
             << "| " << std::setw(18) << books[i].author 
             << "| " << std::setw(7) << std::fixed << std::setprecision(2) << books[i].price 
             << "| " << books[i].releaseYear << " |" << std::endl;
        priceSum += books[i].price;
    }
    std::cout << "---------------------------------------------------------------" << std::endl;

    Book mostExpensive = books[0];
    for (int i = 0; i < NUMBER_OF_BOOKS; i++) {
        if (books[i].price > mostExpensive.price) {
            mostExpensive = books[i];
        }
    }

    std::cout << std::endl << "Most expensive book: " << mostExpensive.title << " - " << mostExpensive.price << " PLN" << std::endl;

    double priceAvg = priceSum / NUMBER_OF_BOOKS;

    std::cout << "Price average: " << priceAvg << " PLN" << std::endl;
    std::cout << std::endl << "Books released after 2015:" << std::endl;
    for (int i = 0; i < NUMBER_OF_BOOKS; i++) {
        if (books[i].releaseYear > 2015) {
            std::cout << "- " << books[i].title << " (" << books[i].releaseYear << ")" << std::endl;
        }
    }


    return 0;
}
