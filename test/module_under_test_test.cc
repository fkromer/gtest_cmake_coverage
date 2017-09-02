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

TEST(SingleDecisionCoverage, TruePath) {
  bool expectedDirectTestOutput = true;
  bool observedDirectTestOutput = SingleDecisionCoverage(true);
  EXPECT_EQ(expectedDirectTestOutput, observedDirectTestOutput);
}

TEST(SingleDecisionCoverage, FalsePath) {
  bool expectedDirectTestOutput = false;
  bool observedDirectTestOutput = SingleDecisionCoverage(false);
  EXPECT_EQ(expectedDirectTestOutput, observedDirectTestOutput);
}

TEST(MultipleDecisionCoverage, FirstTruePath) {
  bool first_decision = true;
  bool second_decision = true;
  bool expectedDirectTestOutput = true;
  bool observedDirectTestOutput = MultiDecisionCoverage(first_decision, second_decision);
  EXPECT_EQ(expectedDirectTestOutput, observedDirectTestOutput);
}

TEST(MultipleDecisionCoverage, SecondTruePath) {
  bool first_decision = true;
  bool second_decision = false;
  bool expectedDirectTestOutput = true;
  bool observedDirectTestOutput = MultiDecisionCoverage(first_decision, second_decision);
  EXPECT_EQ(expectedDirectTestOutput, observedDirectTestOutput);
}

TEST(MultipleDecisionCoverage, ThirdTruePath) {
  bool first_decision = false;
  bool second_decision = true;
  bool expectedDirectTestOutput = true;
  bool observedDirectTestOutput = MultiDecisionCoverage(first_decision, second_decision);
  EXPECT_EQ(expectedDirectTestOutput, observedDirectTestOutput);
}

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
