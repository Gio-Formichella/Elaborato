//
// Created by gio on 15/08/21.
//

#include "gtest/gtest.h"
#include "../Time.h"

TEST(TimeTest,ConstructorTest){
    Time t;
    ASSERT_TRUE(t.isNull());
}

TEST(TimeTest,GetTimeFormatTest) {
    Time t;
    ASSERT_EQ("hh:mm:ss", t.getTimeFormat());
    t.changeTimeFormat();
    ASSERT_EQ("hh:mm", t.getTimeFormat());
    t.changeTimeFormat();
    ASSERT_EQ("H:m:s a", t.getTimeFormat());
    t.changeTimeFormat();
    ASSERT_EQ("hh:mm:ss", t.getTimeFormat());
}
