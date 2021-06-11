#include <stdio.h>
#include <inttypes.h>
#include "awesome.h"


int main(int argc, char* argv) {
  int64_t a = 42;

  puts("Behold the greatest function!\n\n");

  printf("awesome(a) = %" PRId64 "\n", awesome(a));

  return 0;
}
