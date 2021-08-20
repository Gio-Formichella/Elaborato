//
// Created by gio on 16/08/21.
//

#include "gtest/gtest.h"
#include "../Date.h"

TEST(DateTest,ConstructorTest){
    Date d;
    ASSERT_TRUE(d.isNull());
}

TEST(DateTest, GetDateFormatTest) {
    Date d;
    ASSERT_EQ("dd.MM.yyyy", d.getDateFormat());
    d.changeDateFormat();
    ASSERT_EQ("dd.MM.yy", d.getDateFormat());
    d.changeDateFormat();
    ASSERT_EQ("dddd MMMM d", d.getDateFormat());
    d.changeDateFormat();
    ASSERT_EQ("dd.MM.yyyy", d.getDateFormat());
}
