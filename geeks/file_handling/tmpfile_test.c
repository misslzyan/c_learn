#include <stdio.h>

int main(int argc, char **argv) {
  FILE *f;
  f = tmpfile();
  if (f == NULL ) {
    printf("could not open the file\n");
    return 0;
  }
  fputs("geeksforgeeks\n",f);
  rewind(f);
  char c;
  while((c=fgetc(f))!=EOF){
    fputc(c, stdout);
  }
  return 0;
}
