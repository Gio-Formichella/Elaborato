//
// Created by gio on 15/08/21.
//

#include "gtest/gtest.h"
#include "../Time.h"

TEST(TimeTest,setTime) {
    Time t;
    ASSERT_NO_THROW(t.setTime(10,24,20));
    t.changeFormat(TimeFormat::format1);
    ASSERT_EQ(t.showTime(),"10:24:20");
}

TEST(TimeTest, showTimeTest){
    Time t;
    t.setTime(17,48,22);

    t.changeFormat(TimeFormat::format1);
    ASSERT_EQ(t.showTime(),"17:48:22");
    t.changeFormat(TimeFormat::format2);
    ASSERT_EQ(t.showTime(),"17:48");
    t.changeFormat(TimeFormat::format3);
    ASSERT_EQ(t.showTime(),"17:48:22 pm");
}

TEST(TimeTest,changeTimeFormattest){
    Time t1,t2;
    t1.setTime(14,14,14);
    t2.setTime(14,14,14);
    t2.changeFormat(TimeFormat::format2);
    ASSERT_FALSE(t1.showTime()==t2.showTime());
}