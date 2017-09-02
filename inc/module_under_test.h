#ifndef MODULE_UNDER_TEST_H_
#define MODULE_UNDER_TEST_H_

#include <stdlib.h>
#include <stdbool.h>

extern int StatementCoverage(void);
extern bool SingleDecisionCoverage(bool true_or_false);
extern bool MultiDecisionCoverage(bool first_decision, bool second_decision);

#endif // MODULE_UNDER_TEST_H_
