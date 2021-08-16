//
// Created by gio on 16/08/21.
//

#include "gtest/gtest.h"
#include "../Date.h"


TEST(DateTest, GetDateFormatTest) {
    Date d;
    ASSERT_EQ("dd.MM.yyyy",d.GetDateFormat());
    d.ChangeDateFormat();
    ASSERT_EQ("dd.MM.yy",d.GetDateFormat());
    d.ChangeDateFormat();
    ASSERT_EQ("dddd MMMM d",d.GetDateFormat());
    d.ChangeDateFormat();
    ASSERT_EQ("dd.MM.yyyy",d.GetDateFormat());
}
