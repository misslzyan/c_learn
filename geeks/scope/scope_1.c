#include <stdio.h>

int x = 0;
int f() {
  // f() always return the global varible 0.
  return x;
}

int g() {
  int x = 1;
  return f();
}

int main() {
  printf("%d\n",g());
  return 0;
}
