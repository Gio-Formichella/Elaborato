//
// Created by gio on 11/08/21.
//

#ifndef ELABORATO_DATE_H
#define ELABORATO_DATE_H

#include <QDate>
#include <vector>
#include <string>

class Date : public QDate {
public:
    Date();
    ~Date() = default;

    std::string getDateFormat() const;
    void changeDateFormat();
private:
    std::vector<std::string> dateFormat;
    std::vector<std::string>::const_iterator dateFormatIterator;
};


#endif //ELABORATO_DATE_H
