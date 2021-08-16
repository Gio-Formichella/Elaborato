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
    ASSERT_EQ("hh:mm:ss",t.GetTimeFormat());
    t.ChangeTimeFormat();
    ASSERT_EQ("hh:mm",t.GetTimeFormat());
    t.ChangeTimeFormat();
    ASSERT_EQ("H:m:s a",t.GetTimeFormat());
    t.ChangeTimeFormat();
    ASSERT_EQ("hh:mm:ss",t.GetTimeFormat());
}
