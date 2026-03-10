#include <iostream>
#include <iomanip>

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

int main() {
    Employee employees[3] = {
        {"Szymon", "Nowakowski", "Programista", 30000.00, {"Akacjowa", "42a", "Warszawa", "321-23"}},
        {"Adrian", "Gniazdo", "Dyrektor", 70000.00, {"Akacjowa", "45a", "Krakow", "321-23"}},
        {"Kasia", "Mokolo", "Programista", 30000.00, {"Akacjowa", "42a", "Gdansk", "321-23"}}
    };

    std::cout << "=== Employee Register ===" << std::endl << std::endl;

    double salarySum = 0;
    Employee highestEarner = employees[0];
    for (int i = 0; i < 3; i++) {
        salarySum += employees[i].salary;
        if (employees[i].salary > highestEarner.salary) {
            highestEarner = employees[i];
        }

        std::cout << "Employee: " << i + 1 << std::endl;
        std::cout << "  Name: " << employees[i].fristName << " " << employees[i].surename << std::endl;
        std::cout << "  Position: " << employees[i].position << std::endl;
        std::cout << "  Salary: " << employees[i].salary << std::endl;
        std::cout << "  Address: ul. " << employees[i].address.street << " " << employees[i].address.houseNumber << std::endl;
        std::cout << "           " << employees[i].address.postCode << " " << employees[i].address.city << std::endl << std::endl;  
    }

    std::cout << "=== Summary ===" << std::endl;
    std::cout << "Salary sum: " << std::fixed << std::setprecision(2) << salarySum << "PLN" << std::endl;
    std::cout << "Highest earner: " << highestEarner.fristName << " " << highestEarner.surename << " - " << std::fixed << std::setprecision(2) << highestEarner.salary << " PLN" << std::endl;
}
