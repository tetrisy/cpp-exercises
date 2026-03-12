#include <iostream>

struct Person {
    std::string firstName;
    std::string lastName;
    int age;
};

void displayPreson(Person* person);

int main() {
    Person p1 = {"Szymon", "Nowakowski", 24};
    displayPreson(&p1);
    Person p2 = {"Adrian", "Krokodyl", 23};
    displayPreson(&p2);
    Person p3 = {"Julia", "Motyl", 22};
    displayPreson(&p3);

    return 0;
}

void displayPreson(Person* person) {
    std::cout << "=== Person details ===" << std::endl;
    std::cout << "First name: " << person->firstName << std::endl;
    std::cout << "Last name: " << person->lastName << std::endl;
    std::cout << "Age: " << person->age << std::endl << std::endl;
}
