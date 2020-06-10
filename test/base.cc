#include <iostream>
#include "../lib/unit.h"

using namespace std;
using namespace unit_test;

int main() {
  unit_test::group("example group", vector<unit_test::UnitCase> {
    unit_test::test("example unit", [&]() {
    })
  }).run();

  return 0;
}
