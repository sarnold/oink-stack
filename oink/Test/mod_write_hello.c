// print hello world

// #include "lib_foo.h"

// #include <stdio.h>
// #include <stdlib.h>

int z;

int main() {
  printf("main: Hello, world!\n");
  int *x = &z;
  *x = 3;
  printf("main: 1, x is %d\n", *x);
  foo_read(x);
  printf("main: 2, x is %d\n", *x);
  foo_write(x);                 // bad
  printf("main: 3, x is %d\n", *x);
  return 0;
}
