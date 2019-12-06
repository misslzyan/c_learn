#include <stdio.h>
#include <ctype.h>
int main(){

  char ch = '\n';
  char str[]="aaa\n";
  int i=0;
  while(str[i]){
   printf("%c",str[i]);
   i++;
  }
 // printf("%d\n",ch);
}
