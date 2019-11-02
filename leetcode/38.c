#include <stdio.h>
#include "LinkedList.h"
#include <stdlib.h>

/*
The count-and-say sequence is the sequence of integers with the first five terms as following:

1.     1
2.     11
3.     21
4.     1211
5.     111221
1 is read off as "one 1" or 11.
11 is read off as "two 1s" or 21.
21 is read off as "one 2, then one 1" or 1211.
*/
// char * countAndSay(int n){

// }

char * genNext(char *prev){
	int c = 0;
	LinkedList *list = newList();
	for(int i =1;prev[i]!='\0';i++){
		if(prev[i]==prev[i-1]){
			c++;
		}else{
			char first = c+1+'0';
			char behind = prev[i-1];
			add_ll(list, &first);
			add_ll(list, &behind);
		}
	}
	print_ll(list);
	printf("%d\n", len(list));
	return NULL;
}

int main(){
	char prev[] = "11";
	genNext(prev);
}