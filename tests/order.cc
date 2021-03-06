#include "gmock/gmock.h"
#include "gtest/gtest.h"

#include "core/color_test.cc"
#include "core/vector2_test.cc"
#include "core/allocation_test.cc"

int main(int argc, char* argv[]) {
  ::testing::InitGoogleMock(&argc, argv);
  return RUN_ALL_TESTS();
}