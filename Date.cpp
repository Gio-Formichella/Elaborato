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
    *date = d;
}

QString Date::showDate(QString format) {
    return date->toString(format);
}
