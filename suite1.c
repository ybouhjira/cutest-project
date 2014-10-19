#include <stdio.h>
#include <stdlib.h>
#include "CuTest/CuTest.h"


void test_something(CuTest *tc)
{
  CuAssertTrue(tc, 1);
}

CuSuite* suite1_get_suite()
{
  CuSuite *suite = CuSuiteNew();
  SUITE_ADD_TEST(suite, test_something);
 
  return suite;
}


