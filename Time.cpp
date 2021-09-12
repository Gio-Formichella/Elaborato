//
// Created by gio on 09/08/21.
//

#include "Time.h"

Time::Time() :time(new QTime),format(TimeFormat::format3){
}

void Time::setTime(int h, int m, int s) {
    QTime t(h,m,s);
    *time = t;
}

QString Time::showTime() const {
    QString f;
    switch (format) {
        case TimeFormat::format1:
            f="hh:mm:ss";
            break;
        case TimeFormat::format2:
            f = "hh:mm";
            break;
        case TimeFormat::format3:
            f= "H:m:s a";
            break;
    }
    return time->toString(f);
}

void Time::changeFormat(TimeFormat f) {
    format=f;
}
