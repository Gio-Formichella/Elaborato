//
// Created by gio on 15/08/21.
//

#include "gtest/gtest.h"
#include "../Time.h"

TEST(TimeTest,GetTimeFormatTest) {
    Time t;
    ASSERT_EQ("hh:mm:ss",t.GetTimeFormat());
}
