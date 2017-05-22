#include "gtest/gtest.h"

extern "C"
{
  #include "module_under_test.h"
}

TEST(StatementCoverage, OnlyPossibleGoodCase) {
  int expectedDirectTestOutput = 42;
  int observedDirectTestOutput = StatementCoverage();
  EXPECT_EQ(expectedDirectTestOutput, observedDirectTestOutput);
}

TEST(DecisionCoverage, TruePath) {
  bool expectedDirectTestOutput = true;
  bool observedDirectTestOutput = DecisionCoverage(true);
  EXPECT_EQ(expectedDirectTestOutput, observedDirectTestOutput);
}

TEST(DecisionCoverage, FalsePath) {
  bool expectedDirectTestOutput = false;
  bool observedDirectTestOutput = DecisionCoverage(false);
  EXPECT_EQ(expectedDirectTestOutput, observedDirectTestOutput);
}

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
