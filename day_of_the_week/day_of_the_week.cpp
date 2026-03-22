#include <iostream>
using namespace std;

enum class WeekDay {
    MONDAY = 1,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATRUDAY,
    SUNDAY,
};

std::string dayToText(WeekDay const day);
bool isWeekend(WeekDay const day);

int main() {
    std::cout << "=== WEEK DAY ===" << std::endl << std::endl;
    
    int userInput;
    bool validInput = false;
    do {
        std::cout << "Enter day number (1-7): ";
        
        if (std::cin >> userInput) {
            if (userInput >= 1 && userInput <= 7) {
                validInput = true;
            } else {
                std::cout << "You need to enter a number between 1 and 7!" << std::endl;
            }
        } else {
            std::cout << "You need to enter a number!" << std::endl;
        }
        std::cin.clear();
        std::cin.ignore(1000, '\n');
    } while (!validInput);
    WeekDay day = static_cast<WeekDay>(userInput);
    
    std::cout << std::endl << "Chosen day: " << dayToText(day) << std::endl;
    std::cout << "Number of day: " << userInput << std::endl;
    bool isWeekendDay = isWeekend(day);
    std::cout << "Is tihs weekend?: ";
    if (isWeekendDay) {
        std::cout << "Yes" << std::endl << std::endl;
    } else {
        std::cout << "No" << std::endl << std::endl;
        std::cout << "This is a working day." << std::endl;
        std::cout << "Days left until weekend: " << 6 - static_cast<int>(day) << std::endl; 
    }

    return 0;
}

std::string dayToText(WeekDay const day) {
    switch (day) {
        case WeekDay::MONDAY: return "Monday";
        case WeekDay::TUESDAY: return "Tuesday";
        case WeekDay::WEDNESDAY: return "Wednesday";
        case WeekDay::THURSDAY: return "Thursday";
        case WeekDay::FRIDAY: return "Friday";
        case WeekDay::SATRUDAY: return "Saturday";
        case WeekDay::SUNDAY: return "Sunday";
        default: return "Unkonown day";
    }
}   

bool isWeekend(WeekDay const day) {
    if (day == WeekDay::SATRUDAY || day == WeekDay::SUNDAY) {
        return true;
    } else {
        return false;
    }
}
