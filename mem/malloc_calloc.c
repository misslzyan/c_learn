#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
  int *arr;
  arr = (int*) malloc (5 * sizeof(int));

  free(arr);

  arr = (int*) calloc (5, sizeof(int));

  free(arr);

  return 0;
}
