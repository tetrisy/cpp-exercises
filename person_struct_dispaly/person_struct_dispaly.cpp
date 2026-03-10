#include <iostream>

struct Person {
    std::string name;
    int age;
    double height;
};

void displayPerson(Person person);

int main() {
    Person persons[3] =  {
        {"Szymon", 24, 189.0},
        {"Adam", 70, 176.0},
        {"Anna", 22, 168.0},
    };

    std::cout << "=== Person details ===" << std::endl;

    for (int i = 0; i < 3; i++) {
        std::cout << "\nPerson " << i + 1 << ":" << std::endl;
        displayPerson(persons[i]);
    }

    Person oldest = persons[0];
    for (int i = 0; i < 3; i++) {
        if (persons[i].age > oldest.age) {\
            oldest = persons[i];
        }
    }

    std::cout << "\nOldest person: " << oldest.name << " - " << oldest.age << " years." << std::endl;
    return 0;
}

void displayPerson(Person person) {
    std::cout << "Name: " << person.name << std::endl;
    std::cout << "Age: " << person.age << std::endl;
    std::cout << "Height: " << person.height << std::endl;
}
