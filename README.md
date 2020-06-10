# ccunit

Unit Testing Framework For Cpp

## example

```c++
#include <iostream>
#include "../lib/unit.h" // include unit library header

using namespace std;
using namespace unit_test;

int main() {
  unit_test::group("example group", vector<unit_test::UnitCase> {

    unit_test::test("example unit 1", [&]() {
      // write your test code here
    }),

    unit_test::test("example unit 2", [&]() {
      // write your test code here
    })

  }).run();

  return 0;
}
```

output example:

```
Group[example group]
  - Run case [example unit]
Group[example group]
  ✓ [example unit] (0ms)
```
