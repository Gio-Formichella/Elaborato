//
// Created by gio on 11/08/21.
//

#ifndef ELABORATO_DATE_H
#define ELABORATO_DATE_H

#include <QDate>
#include <vector>
#include <string>

class Date {
public:
    Date();
    ~Date();

    void setDate(QDate d);
    QString showDate(QString format);
private:
    QDate* date;
};


#endif //ELABORATO_DATE_H
