//
// Created by gio on 09/08/21.
//

#include "Time.h"

Time::Time() {
    timeFormat.emplace_back("hh:mm:ss");
    timeFormat.emplace_back("hh:mm");
    timeFormat.emplace_back("H:m:s a");

    timeFormatIterator=timeFormat.begin();
}

void Time::ChangeFormat(){
    timeFormatIterator++;
}
