//
// Created by gio on 11/08/21.
//

#include "Timer.h"

QString Timer::RemainingTime() const {
    int msecRemainingTime = QTimer::remainingTime();
    int msec = msecRemainingTime%1000;
    int s = msecRemainingTime/1000;
    int m = s/60;
    int h = m/60;
    QTime qtimeRemainingTime;
    qtimeRemainingTime.setHMS(h,m%60,s%60,msec);
    return qtimeRemainingTime.toString();
}