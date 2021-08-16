//
// Created by gio on 16/08/21.
//

#include "gtest/gtest.h"
#include "../Timer.h"

TEST(TimerTest,ConstructorTest){
    Timer t;
    ASSERT_EQ(0,t.interval());
    ASSERT_EQ(-1,t.remainingTime());
    ASSERT_EQ(Qt::CoarseTimer,t.timerType());
    ASSERT_FALSE(t.isSingleShot());
}