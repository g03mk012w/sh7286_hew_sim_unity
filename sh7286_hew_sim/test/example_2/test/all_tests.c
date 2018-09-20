#include "unity_fixture.h"

static void RunAllTests(void)
{
  RUN_TEST_GROUP(ProductionCode);
  RUN_TEST_GROUP(ProductionCode2);
}

//int main(int argc, const char * argv[])
int TestProduction_main(void)
{
  int argc = 0;
  char* argv[] = { 0 };

  return UnityMain(argc, argv, RunAllTests);
}
