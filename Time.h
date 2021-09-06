//
// Created by gio on 09/08/21.
//

#ifndef ELABORATO_TIME_H
#define ELABORATO_TIME_H

#include <QTime>
#include <string>
#include <vector>

class Time {
public:
    Time();
    ~Time();

    void setTime(QTime t);
    QString showTime(QString format);
private:
    QTime* time;
};


#endif //ELABORATO_TIME_H
