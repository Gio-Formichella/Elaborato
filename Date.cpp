//
// Created by gio on 11/08/21.
//

#include "Date.h"

Date::Date() : date(new QDate) {
}

Date::~Date() {
    delete date;
}

void Date::setDate(QDate d) {
    if(d.isValid()){
        *date = d;
    }else{
        throw std::invalid_argument("invalid system clock date");
    }
}

QString Date::showDate(QString format) {
    return date->toString(format);
}
