//
// Created by gio on 11/08/21.
//

#include "Timer.h"

QString Timer::showRemainingTime() const {
    int msecRemainingTime = timer->remainingTime();
    int msec = msecRemainingTime%1000;
    int s = msecRemainingTime/1000;
    int m = s/60;
    int h = m/60;
    QTime qtimeRemainingTime;
    qtimeRemainingTime.setHMS(h,m%60,s%60,msec);
    return qtimeRemainingTime.toString();
}

void Timer::pause() {
    int remainingTime=timer->remainingTime();
    timer->stop();
    timer->setInterval(remainingTime);
}

void Timer::setTimer(QTime t) {
    timer->setInterval((-1) * t.msecsTo(QTime(0, 0, 0, 0)));
}

Timer::~Timer() {
    delete timer;
}

Timer::Timer() : timer(new QTimer){
}

void Timer::startTimer() {
    timer->start();
}

bool Timer::isTimerActive() {
    return timer->isActive();
}

void Timer::stopTimer() {
    timer->stop();
}
