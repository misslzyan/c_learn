#include <stdio.h>
#include "stack.h"

void print_error(){
	printf("something goes wrong !\n");
}

int main(){
	Stack *stack = newStack(3);
	if(is_empty(stack))
		printf("stack is emtpy!\n");
	if(is_full(stack))
		printf("something goes wrong.\n");
	int a = 1;
	push(stack, &a);
	if(is_empty(stack))
		print_error();
	int b=2;
	push(stack, &b);
	int c = 3;
	push(stack, &c);
	printf("emtpy_res:%d\n", is_empty(stack));
	if(is_empty(stack))
		print_error();
	if(is_full(stack))
		printf("stack is full !\n");
	else 
		print_error();
	int r1 = *(int *)pop(stack);
	int r2 = *(int *)pop(stack);
	int r3 = *(int *)pop(stack);
	printf("%d %d %d\n",r1, r2,r3 );
	if(is_empty(stack))
		printf("stack is empty\n");
	else 
		print_error();
	free_stack(stack);
	return 0;
}