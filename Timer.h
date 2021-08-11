//
// Created by gio on 11/08/21.
//

#ifndef ELABORATO_TIMER_H
#define ELABORATO_TIMER_H

#include <QTimer>
#include <QTime>

class Timer : public QTimer {
public:
    Timer() = default;
    ~Timer() = default;

    bool SetInterval(int h, int m,int s);
};


#endif //ELABORATO_TIMER_H
