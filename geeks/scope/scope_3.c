#include <stdio.h>

int sub(int num1, int num2);

int num1;

int sub(int num1, int num2) {
  return num1 - num2;
}

int main(void) {
  printf("%d\n", sub(10, 5));
  return 0;
}
