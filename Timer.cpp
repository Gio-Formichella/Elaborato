//
// Created by gio on 11/08/21.
//

#include "Timer.h"

bool Timer::SetInterval(int h, int m, int s) {
    if (QTime::isValid(h, m, s)) {
        QTime qtimeIntervall(h, m, s);
        setInterval(qtimeIntervall.msec());
        return true;
    }
    return false;
}