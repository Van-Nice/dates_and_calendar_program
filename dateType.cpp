//
// Created by wilson on 6/7/23.
//

#include <iostream>
#include "dateType.h"

void dateType::setDate(int month, int day, int year) {
    dMonth = month;
    dDay = day;
    dYear = year;
}

int dateType::getDay() const {
    return dDay;
}

int dateType::getMonth() const {
    return dMonth;
}

int dateType::getYear() const {
    return dYear;
}

void dateType::printDate() const {
    std::cout << getMonth() << "-"<< getDay() << "-" << getYear();
}

bool dateType::isLeapYear() {
    return false;
}

dateType::dateType(int month, int day, int year) {
    dMonth = month;
    dDay = day;
    dYear = year;
}
