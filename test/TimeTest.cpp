//
// Created by gio on 15/08/21.
//

#include "gtest/gtest.h"
#include "../Time.h"

TEST(TimeTest,setTime) {
    Time t;
    QString format = "hh:mm:ss";

    ASSERT_NO_THROW(t.setTime(QTime(0,0,10)));
    ASSERT_EQ(t.showTime(format),"00:00:10");

    ASSERT_NO_THROW(t.setTime(QTime(10,0)));
    ASSERT_EQ(t.showTime(format),"10:00:00");

    ASSERT_NO_THROW(t.setTime(QTime(0,3)));
    ASSERT_EQ(t.showTime(format),"00:03:00");

    ASSERT_NO_THROW(t.setTime(QTime(0,0,0,100)));

    ASSERT_THROW(t.setTime(QTime(0,0,66)),std::invalid_argument);
    ASSERT_THROW(t.setTime(QTime(0,63,50)),std::invalid_argument);
    ASSERT_THROW(t.setTime(QTime(25,22,22)),std::invalid_argument);
}

TEST(TimeTest, showTimeTest){
    Time t;
    t.setTime(QTime(17,48,22));
    QString format1 = "hh:mm:ss";
    QString format2 = "hh:mm";
    QString format3 = "H:m:s a";

    ASSERT_EQ(t.showTime(format1),"17:48:22");
    ASSERT_EQ(t.showTime(format2),"17:48");
    ASSERT_EQ(t.showTime(format3),"17:48:22 pm");
}