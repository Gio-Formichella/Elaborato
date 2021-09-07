//
// Created by gio on 16/08/21.
//

#include "gtest/gtest.h"
#include "../Date.h"

TEST(DateTest, setDateTest){
    Date d;
    QString format = "dd.MM.yy";

    ASSERT_NO_THROW(d.setDate(QDate(2021,9,7)));
    ASSERT_EQ(d.showDate(format),"07.09.21");

    ASSERT_NO_THROW(d.setDate(QDate(4,11,27)));
    ASSERT_EQ(d.showDate(format),"27.11.04");

    ASSERT_THROW(d.setDate(QDate(2021,13,12)),std::invalid_argument);
    ASSERT_THROW(d.setDate(QDate(2021,2,30)),std::invalid_argument);
}

TEST(DateTest, showDateTest){
    Date d;
    QString format1 = "dd.MM.yy";
    QString format2 = "dddd MMM d";
    QString format3 = "dd.MM.yyyy";
    d.setDate(QDate(2021,9,7));

    ASSERT_EQ(d.showDate(format1),"07.09.21");
    ASSERT_EQ(d.showDate(format2),"Tuesday Sep 7");
    ASSERT_EQ(d.showDate(format3),"07.09.2021");
}