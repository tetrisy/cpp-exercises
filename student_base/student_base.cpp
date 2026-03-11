#include <iostream>
#include <limits>
#include <iomanip>

struct Student {
    int index;
    std::string firstName;
    std::string lastName;
    std::string field;
    double average;
};

void AddStudent(Student* students, int& numberOfStudents);
void DisplayStudents(Student* students, int numberOfStudents);
void FindStudent(Student* students, int index, int numberOfStudents);
void DisplayBestStudent(Student* students, int numberOfStudents);
double CalculateAverage(Student* students, int numberOfStudents);
void PressEnterToContinue();

int main() {
    const int MAX_STUDENTS = 10;
    Student students[MAX_STUDENTS];
    int userInput;
    bool userInputValid = false;
    int numberOfStudents = 0;

    do {
        std::cout << "=== Student Base Menu ===" << std::endl << std::endl;
        std::cout << "1. Add student" << std::endl;
        std::cout << "2. Display all students" << std::endl;
        std::cout << "3. Find student using index number" << std::endl;
        std::cout << "4. Display best student" << std::endl;
        std::cout << "5. Calculate average of all students" << std::endl;
        std::cout << "0. Exit" << std::endl << std::endl;
        
        do {
            std::cout << "Choose an option(0-5): ";

            if (std::cin >> userInput) {
                if (userInput >= 0 && userInput <= 5) {
                    userInputValid = true;
                } else {
                    std::cout << "Error! Enter a number between 0 and 5";
                }
            } else {
                std::cout << "Error! Invalid input. Enter a number.";
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
        } while(!userInputValid);
        userInputValid = false;

        switch(userInput) {
            case 1:
                AddStudent(students, numberOfStudents);
                PressEnterToContinue();
                break;
            case 2:
                DisplayStudents(students, numberOfStudents);
                PressEnterToContinue();
                break;
            case 3:
                do {
                    std::cout << "Enter index of student you're looking for: ";

                    if (std::cin >> userInput) {
                        break;
                    } else {
                        std::cout << "Error! Invalid input. Enter a number.";
                        std::cin.clear();
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    }
                } while(!userInputValid);
                FindStudent(students, userInput, numberOfStudents);
                PressEnterToContinue();
                break;
            case 4:
                DisplayBestStudent(students, numberOfStudents);
                PressEnterToContinue();
                break;
            case 5: {
                double sumAvg = CalculateAverage(students, numberOfStudents);
                std::cout << "The sum average of all students is " << sumAvg << std::endl << std::endl;
                PressEnterToContinue();
                break;
            }
            case 0:
                break;
        }

    } while(userInput != 0);

    return 0;
}

void AddStudent(Student* students, int& numberOfStudents) {
    std::cout << "Enter index number: ";
    std::cin >> students[numberOfStudents].index;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "Enter first name: ";
    std::getline(std::cin, students[numberOfStudents].firstName);
    std::cout << "Enter last name: ";
    std::getline(std::cin, students[numberOfStudents].lastName);
    std::cout << "Enter field: ";
    std::getline(std::cin, students[numberOfStudents].field);
    std::cout << "Enter grades average: ";
    std::cin >> students[numberOfStudents].average;
    std::cout << "Student added succesfully!" << std::endl;
    numberOfStudents++;
};

void DisplayStudents(Student* students, int numberOfStudents) {
    if (numberOfStudents == 0) {
        std::cout << "There are no students." << std::endl << std::endl;
        return;
    }

    std::cout << std::endl << "Student List (" << numberOfStudents << "):" << std::endl;
    std::cout << "-----------------------------------------------------------------" << std::endl;
    std::cout << "| " << std::left << std::setw(10) << "Index" 
         << " | " << std::setw(10) << "First Name"
         << " | " << std::setw(10) << "Last Name"
         << " | " << std::setw(12) << "Field"
         << " | " << std::setw(7) << "Average" << " |" << std::endl;
    std::cout << "-----------------------------------------------------------------" << std::endl;

    for (int i = 0; i < numberOfStudents; i++) {
        std::cout << "| " << std::left << std::setw(10) << students[i].index 
         << " | " << std::setw(10) << students[i].firstName
         << " | " << std::setw(10) << students[i].lastName
         << " | " << std::setw(12) << students[i].field
         << " | " << std::fixed << std::setprecision(2) << std::setw(7) << students[i].average << " |" << std::endl;
        std::cout << "-----------------------------------------------------------------" << std::endl;
    }
};

void FindStudent(Student* students, int index, int numberOfStudents) {
    for(int i = 0; i < numberOfStudents; i++) {
        if(students[i].index == index) {
            std::cout << "Student with index " << index << " is " << students[i].firstName << " " << students[i].lastName << std::endl << std::endl;
            return;
        }
    }

    std::cout << "Student with that index doesn't exist." << std::endl << std::endl;
}

void DisplayBestStudent(Student* students, int numberOfStudents) {
    Student bestStudent = students[0];

    for (int i = 0; i < numberOfStudents; i++) {
        if(students[i].average > bestStudent.average) {
            bestStudent = students[i];
        }
    }

    std::cout << "Best student is " << bestStudent.firstName << " " << bestStudent.lastName << " with average grade " << bestStudent.average << std::endl << std::endl;
}

double CalculateAverage(Student* students, int numberOfStudents) {
    double sumAvg = 0;

    for (int i = 0; i < numberOfStudents; i++) {
        sumAvg += students[i].average;
    }
    sumAvg /= numberOfStudents;

    return sumAvg;
}

void PressEnterToContinue() {
    std::cout << "\nPress Enter key to continue...";
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();
}
