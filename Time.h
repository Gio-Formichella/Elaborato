//
// Created by gio on 09/08/21.
//

#ifndef ELABORATO_TIME_H
#define ELABORATO_TIME_H

#include <QTime>
#include <string>
#include <vector>
#include <exception>
#include <iostream>

enum class TimeFormat {
    format1,
    format2,
    format3,
};

class Time {
public:
    Time();
    ~Time();

    void setTime(int h, int m, int s);
    QString showTime() const;

    void changeFormat(TimeFormat& f);
private:
    QTime* time;
    TimeFormat format;
};


#endif //ELABORATO_TIME_H
