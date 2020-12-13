// -*- mode: c++; coding: utf-8 -*-

#include "gtest/gtest.h"
#include "add.h"

TEST(TRIVIAL, TEST1) {
    ASSERT_EQ(1, 1);
}

TEST(ONEPLUSONE, TEST2) {
    ASSERT_EQ(2, add(1, 1));
}

TEST(ONEPLUSONE, TEST3) {
    ASSERT_EQ(3, add(1, 2));
}
