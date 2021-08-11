//
// Created by gio on 11/08/21.
//

#include "Date.h"

Date::Date() {
    dateFormat.emplace_back("dd.MM.yyyy");
    dateFormat.emplace_back("dddd");
    dateFormat.emplace_back("dddd MMMM d yy");

    dateFormatIterator=dateFormat.begin();
}

std::string Date::GetDateFormat() const {
    return *dateFormatIterator;
}

void Date::ChangeDateFormat() {
    dateFormatIterator++;
    if(dateFormatIterator==dateFormat.end())
        dateFormatIterator=dateFormat.begin();
}
