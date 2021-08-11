//
// Created by gio on 09/08/21.
//

#ifndef ELABORATO_TIME_H
#define ELABORATO_TIME_H

#include <QTime>
#include <string>
#include <vector>

class Time : public QTime {
public:
    Time();
    ~Time() = default;

    std::string GetTimeFormat() const;
    void ChangeTimeFormat();
private:
    std::vector<std::string> timeFormat;
    std::vector<std::string>::const_iterator timeFormatIterator;
};


#endif //ELABORATO_TIME_H
