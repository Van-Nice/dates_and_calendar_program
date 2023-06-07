#include "dateType.h"
#include <iostream>

void dateType::setDate(int month, int day, int year) {
    // set limits for date entries
//    dYear = year;
//    dMonth = month;
//    dDay = day;
    // years
    if (dYear > 1) {
        dYear = 1900;
        dYear = year;
    } else {
        dYear = year;
    }

    // months
    if (dMonth > 1 && dMonth > 12) {
        dMonth = 1;
        dMonth = month;
        dDay = 1;
        dDay = day;
    } else {
        dMonth = month;
    }

    // days
    if (dMonth == 1 && (dDay < 1 || dDay > 31)) { // January
        dDay = 1;
        dDay = day;
    } else if (dMonth == 2 && (dDay < 1 || dDay > 29)) { // February
        if (!isLeapYear() && dDay > 28) {
            dDay = 1;
            dDay = day;
        }
        dDay = 1;
        dDay = day;
    } else if (dMonth == 3 && (dDay < 1 || dDay > 31)) { // March
        dDay = 1;
        dDay = day;
    } else if (dMonth == 4 && (dDay < 1 || dDay > 30)) { // April
        dDay = 1;
        dDay = day;
    } else if (dMonth == 5 && (dDay < 1 || dDay > 31)) { // May
        dDay = 1;
        dDay = day;
    } else if (dMonth == 6 && (dDay < 1 || dDay > 30)) { // June
        dDay = 1;
        dDay = day;
    } else if (dMonth == 7 && (dDay < 1 || dDay > 31)) { // July
        dDay = 1;
        dDay = day;
    } else if (dMonth == 8 && (dDay < 1 || dDay > 31)) { // August
        dDay = 1;
        dDay = day;
    } else if (dMonth == 9 && (dDay < 1 || dDay > 30)) { // September
        dDay = 1;
        dDay = day;
    } else if (dMonth == 10 && (dDay < 1 || dDay > 31)) { // October
        dDay = 1;
        dDay = day;
    } else if (dMonth == 11 && (dDay < 1 || dDay > 30)) { // November
        dDay = 1;
        dDay = day;
    } else if (dMonth == 12 && (dDay < 1 || dDay > 31)) { // December
        dDay = 1;
        dDay = day;
    } else {
        dDay = day;
    }


    if (isLeapYear()) {
        std::cout << "this is a leap year";
    } else {
        std::cout << "This is not a leap year.";
    }
}

int dateType::getDay() {
    return dDay;
}

int dateType::getMonth() {
    return dMonth;
}

int dateType::getYear() {
    return dYear;
}

void dateType::printDate() {
    std::string month_str = std::to_string(dMonth);
    std::string day_str = std::to_string(dDay);
    std::string year_str = std::to_string(dYear);
    std::string date_str = month_str + "-" + day_str + "-" + year_str;
    std::cout << date_str;
}

bool dateType::isLeapYear() {
    if (dYear % 4 == 0) {
        if (dYear % 100 == 0) {
            return dYear % 400 == 0;
        } else {
            return true;
        }
    }
    return false;
}

dateType::dateType(int month, int day, int year) {
    dateType::setDate(month, day, year);
    dateType::printDate();
}

