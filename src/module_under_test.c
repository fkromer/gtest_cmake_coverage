#include "module_under_test.h"

extern int StatementCoverage(void) {
  int multiplier = 42;
  int multiplicand = 1;
  return multiplier*multiplicand;
}

extern bool DecisionCoverage(bool true_or_false) {
  bool return_value = false;
  if(true_or_false == true) {
    return_value = true;
  }else {
    return_value = false;
  }
  return return_value;
}
