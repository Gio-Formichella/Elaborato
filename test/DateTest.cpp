//
// Created by gio on 16/08/21.
//

#include "gtest/gtest.h"
#include "../Date.h"

TEST(DateTest, setDateTest){
    Date d;
    ASSERT_NO_THROW(d.setDate(9,9,2021));

    ASSERT_EQ(d.showDate(),"09.09.2021");
}

TEST(DateTest, showDateTest){
    Date d;
    d.setDate(7,9,2021);

    ASSERT_EQ(d.showDate(),"07.09.2021");
    d.changeFormat(DateFormat::format2);
    ASSERT_EQ(d.showDate(),"Tuesday Sep 7");
    d.changeFormat(DateFormat::format1);
    ASSERT_EQ(d.showDate(),"07.09.21");
}

TEST(DateTest, changeDateFormatTest){
    Date d1;
    Date d2;
    d2.changeFormat(DateFormat::format2);
    ASSERT_FALSE(d1.showDate()==d2.showDate());
}