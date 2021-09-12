//
// Created by gio on 11/08/21.
//

#ifndef ELABORATO_DATE_H
#define ELABORATO_DATE_H

#include <QDate>
#include <vector>
#include <string>
#include <exception>
#include <memory>

enum class DateFormat{
    format1,
    format2,
    format3
};

class Date {
public:
    Date();
    ~Date() = default;

    void setDate(int day, int month, int year);
    QString showDate() const;

    void changeFormat(DateFormat f);
private:
    std::unique_ptr<QDate> date;
    DateFormat format;
};


#endif //ELABORATO_DATE_H
