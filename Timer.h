//
// Created by gio on 11/08/21.
//

#ifndef ELABORATO_TIMER_H
#define ELABORATO_TIMER_H

#include <QTimer>
#include <QTime>
#include <QObject>

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

private:
    QTimer* timer;
};


#endif //ELABORATO_TIMER_H
