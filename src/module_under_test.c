#include "module_under_test.h"

extern int StatementCoverage(void) {
  int multiplier = 42;
  int multiplicand = 1;
  return multiplier*multiplicand;
}

extern bool SingleDecisionCoverage(bool true_or_false) {
  bool return_value = false;
  if(true_or_false == true) {
    return_value = true;
  }else {
    return_value = false;
  }
  return return_value;
}

// gcov does just support statement coverage and does not consider the
// decision combinations which leads to the true path
extern bool MultiDecisionCoverage(bool first_decision, bool second_decision) {
  bool return_value = false;
  if((first_decision == true) && (second_decision == true)) {
    return_value = true;
  }else {
    return_value = false;
  }
}
