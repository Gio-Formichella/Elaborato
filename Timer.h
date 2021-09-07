//
// Created by gio on 11/08/21.
//

#ifndef ELABORATO_TIMER_H
#define ELABORATO_TIMER_H

#include <QTimer>
#include <QTime>

class Timer{
public:
    Timer();
    ~Timer();

    void setTimer(QTime t);
    void pause();
    QString showRemainingTime() const;

    void startTimer();
    bool isTimerActive();
    void stopTimer();

    //necessario accedere al timeout() SIGNAL
    QTimer* timer;
};


#endif //ELABORATO_TIMER_H
