//
// Created by gio on 11/08/21.
//

#include "Date.h"

Date::Date() : date(new QDate), format(DateFormat::format3) {
}

void Date::setDate(int day, int month, int year) {
    QDate d(year,month,day);
    *date = d;
}

QString Date::showDate() const {
    QString f;

    switch (format) {
        case DateFormat::format1:
            f="dd.MM.yy";
            break;
        case DateFormat::format2 :
            f="dddd MMM d";
            break;
        case DateFormat::format3 :
            f="dd.MM.yyyy";
            break;
    }

    return date->toString(f);
}

void Date::changeFormat(DateFormat f) {
    format = f;
}

