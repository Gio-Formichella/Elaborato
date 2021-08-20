//
// Created by gio on 11/08/21.
//

#include "Date.h"

Date::Date() {
    dateFormat.emplace_back("dd.MM.yyyy");
    dateFormat.emplace_back("dd.MM.yy");
    dateFormat.emplace_back("dddd MMMM d");

    dateFormatIterator=dateFormat.begin();
}

std::string Date::getDateFormat() const {
    return *dateFormatIterator;
}

void Date::changeDateFormat() {
    dateFormatIterator++;
    if(dateFormatIterator==dateFormat.end())
        dateFormatIterator=dateFormat.begin();
}
