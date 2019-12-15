#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
  FILE *fp;
  char file_name[100];
  scanf("%s", file_name);
  fp = fopen(file_name, "w");
  fpos_t position;
  fgetpos(fp, &position);
  fputs("Hello World!\n",fp);
  fsetpos(fp, &position);
  fputs("geeksfogeeks\n", fp);
  fclose(fp);
  return 0;
}
