#include <stdio.h>
#define INCREMENT(x) ++x
int main(){
  int n = 0;
  char *p = "Geeks";
  printf("%d\n", INCREMENT(n));
  printf("%s\n", INCREMENT(p));
}