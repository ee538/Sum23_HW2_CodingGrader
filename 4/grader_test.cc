#include <iostream>
#include <vector>

#include "gtest/gtest.h"
#include "q.h"
// Write several test cases for each function.
//-----------------------------------------------------------------------------

TEST(SwapByPointer, aIsNull) {
  float a = 1;

  SwapByPointer(&a, nullptr);
  EXPECT_EQ(a, 1);
}

TEST(SwapByPointer, bIsNull) {
  float b = 2;

  SwapByPointer(nullptr, &b);
  EXPECT_EQ(b, 2);
}

TEST(SwapByPointer, test1) {
  float a = 1;
  float b = 2;

  SwapByPointer(&a, &b);
  EXPECT_EQ(a, 2);
  EXPECT_EQ(b, 1);
}
//-----------------------------------------------------------------------------

TEST(SwapByReference, test1) {
  float a = 1;
  float b = 2;

  SwapByReference(a, b);
  EXPECT_EQ(a, 2);
  EXPECT_EQ(b, 1);
}
//-----------------------------------------------------------------------------
