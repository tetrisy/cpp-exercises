#include <iostream>
#include <iomanip>
using namespace std;

enum class Months {
    JANUARY = 1,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
};

enum class Season {
    SPRING = 1,
    SUMMER,
    AUTUMN,
    WINTER
};

std::string monthToText(Months const month);
int numberOfDays(Months const month);
Season season(Months const month);
std::string seasonToText(Season const season);
bool isLeapYear(int year);

 
int main() {
    std::cout << "=== Month of the Yaer ===" << std::endl << std::endl;

    int userInput;
    bool validInput = false;
    do {
        std::cout << "Enter month number (1-12): ";
        
        if (std::cin >> userInput) {
            if (userInput >= 1 && userInput <= 12) {
                validInput = true;
            } else {
                std::cout << "You need to enter a number between 1 and 12!" << std::endl;
            }
        } else {
            std::cout << "You need to enter a number!" << std::endl;
        }
        std::cin.clear();
        std::cin.ignore(1000, '\n');
    } while (!validInput);
    validInput = false;
    Months const month = static_cast<Months>(userInput);

    std::cout << std::endl << "Chosen month: " << monthToText(month) << std::endl;
    std::cout << "Month number: " << userInput << std::endl;
    std::cout << "Number of days: " << numberOfDays(month) << std::endl;
    Season currenSeason = season(month);
    std::cout << "Season: " << seasonToText(currenSeason) << std::endl << std::endl;

    std::cout << "--- Year summary ---" << std::endl;
    std::cout << setw(10) << left << monthToText(Months::JANUARY) << "(" << numberOfDays(Months::JANUARY) << " days) - " << seasonToText(season(Months::JANUARY)) << std::endl; 
    std::cout << setw(10) << left << monthToText(Months::FEBRUARY) << "(" << numberOfDays(Months::FEBRUARY) << " days) - " << seasonToText(season(Months::FEBRUARY)) << std::endl; 
    std::cout << setw(10) << left << monthToText(Months::MARCH) << "(" << numberOfDays(Months::MARCH) << " days) - " << seasonToText(season(Months::MARCH)) << std::endl; 
    std::cout << setw(10) << left << monthToText(Months::APRIL) << "(" << numberOfDays(Months::APRIL) << " days) - " << seasonToText(season(Months::APRIL)) << std::endl; 
    std::cout << setw(10) << left << monthToText(Months::MAY) << "(" << numberOfDays(Months::MAY) << " days) - " << seasonToText(season(Months::MAY)) << std::endl; 
    std::cout << setw(10) << left << monthToText(Months::JUNE) << "(" << numberOfDays(Months::JUNE) << " days) - " << seasonToText(season(Months::JUNE)) << std::endl; 
    std::cout << setw(10) << left << monthToText(Months::JULY) << "(" << numberOfDays(Months::JULY) << " days) - " << seasonToText(season(Months::JULY)) << std::endl; 
    std::cout << setw(10) << left << monthToText(Months::AUGUST) << "(" << numberOfDays(Months::AUGUST) << " days) - " << seasonToText(season(Months::AUGUST)) << std::endl; 
    std::cout << setw(10) << left << monthToText(Months::SEPTEMBER) << "(" << numberOfDays(Months::SEPTEMBER) << " days) - " << seasonToText(season(Months::SEPTEMBER)) << std::endl; 
    std::cout << setw(10) << left << monthToText(Months::OCTOBER) << "(" << numberOfDays(Months::OCTOBER) << " days) - " << seasonToText(season(Months::OCTOBER)) << std::endl; 
    std::cout << setw(10) << left << monthToText(Months::NOVEMBER) << "(" << numberOfDays(Months::NOVEMBER) << " days) - " << seasonToText(season(Months::NOVEMBER)) << std::endl; 
    std::cout << setw(10) << left << monthToText(Months::DECEMBER) << "(" << numberOfDays(Months::DECEMBER) << " days) - " << seasonToText(season(Months::DECEMBER)) << std::endl << std::endl; 
  
    std::cout << "--- Leap year ---" << std::endl << std::endl;
    do {
        std::cout << "Enter year: ";
        
        if (std::cin >> userInput) {
                if (userInput >= 1) {
                    validInput = true;
                } else {
                    std::cout << "You need to enter a number bigger than 0!" << std::endl;
                }
        } else {
            std::cout << "You need to enter a number!" << std::endl;
        }
        std::cin.clear();
        std::cin.ignore(1000, '\n');
    } while (!validInput);
    std::cout << "Is " << userInput << " a leap yaer?: ";
    if (isLeapYear(userInput)) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }


    return 0;
}

std::string monthToText(Months const month) {
    switch(month) {
        case Months::JANUARY: return "Januray";
        case Months::FEBRUARY: return "February";
        case Months::MARCH: return "March";
        case Months::APRIL: return "April";
        case Months::MAY: return "May";
        case Months::JUNE: return "June";
        case Months::JULY: return "July";
        case Months::AUGUST: return "August";
        case Months::SEPTEMBER: return "September";
        case Months::OCTOBER: return "October";
        case Months::NOVEMBER: return "November";
        case Months::DECEMBER: return "December";
    }
}

int numberOfDays(Months const month) {
    switch(month){
        case Months::JANUARY: return 31;
        case Months::FEBRUARY: return 28;
        case Months::MARCH: return 31;
        case Months::APRIL: return 30;
        case Months::MAY: return 31;
        case Months::JUNE: return 30;
        case Months::JULY: return 31;
        case Months::AUGUST: return 31;
        case Months::SEPTEMBER: return 30;
        case Months::OCTOBER: return 31;
        case Months::NOVEMBER: return 30;
        case Months::DECEMBER: return 31;
    }
    return 0;
}

Season season(Months const month) {
    switch(month) {
        case Months::DECEMBER:
        case Months::JANUARY:
        case Months::FEBRUARY:
            return Season::WINTER;

        case Months::MARCH:
        case Months::APRIL:
        case Months::MAY:
            return Season::SPRING;

        case Months::JUNE:
        case Months::JULY:
        case Months::AUGUST:
            return Season::SUMMER;

        case Months::SEPTEMBER:
        case Months::OCTOBER:
        case Months::NOVEMBER:
            return Season::AUTUMN;
    }
}

std::string seasonToText(Season const season) {
    switch(season) {
        case Season::AUTUMN: return "Autumn";
        case Season::SPRING: return "Spring";
        case Season::SUMMER: return "Summer";
        case Season::WINTER: return "Winter";
    }
}

bool isLeapYear(int const year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 4 == 0 && year % 400 == 0)) {
        return true;
    } else {
        return false;
    }
}
