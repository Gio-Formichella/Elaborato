//
// Created by gio on 09/08/21.
//

#include "Time.h"

Time::Time() :time(new QTime){
}

QString Time::showTime(QString& format) {
    return time->toString(format);
}

Time::~Time() {
    delete time;
}

void Time::setTime(QTime t) {
    if (t.isValid()){
        *time = t;
    }else {
        throw std::invalid_argument("invalid system clock time");
    }
}
