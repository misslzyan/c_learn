#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
  char old_name[100], new_name[100];
  printf("input old name:");
  scanf("%s", old_name);
  printf("input new name:");
  scanf("%s", new_name);
  FILE *fp = fopen(old_name, "w");
  if (fp == NULL ) {
    printf("creat file error!\n");
    return 0;
  }
  fputs("hello world!", fp);
  fclose(fp);
  rename(old_name, new_name);
  return 0;
}
