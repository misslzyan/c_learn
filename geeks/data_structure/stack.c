#include "stack.h"
#include <stdio.h>
#include <stdlib.h>

Stack* newStack(int cap){
  if (cap <= 0 || cap > MAX_SIZE) {
  	fprintf(stderr, "Cap is wrong !\n");
  	return NULL;
  }
  Stack * ret = (Stack *)malloc(sizeof(Stack));
  ret -> capacity = cap;
  ret -> top = -1;
  ret -> array = malloc(cap * sizeof(void *));
  return ret;
}

// stack is or not emtpy.
int is_empty(Stack * stack) {
  if(stack == NULL) return 1;
  return stack -> top == -1;
}

// push data into stack.
void push(Stack *stack, const void * data) {
  if(stack == NULL ) {
  	fprintf(stderr, "stack is null.\n");
  	return;
  }
  if (is_full(stack)) {
  	fprintf(stderr, "stack is full.\n");
  	return;
  }
  stack -> array[++stack -> top] = data;
}

// pop data from stack.
const void * pop(Stack *stack) {
  if (stack == NULL) {
    fprintf(stderr, "stack is null\n");
    return NULL;
  }
  if (is_empty(stack)) {
  	fprintf(stderr, "stack is emtpy.\n");
  	return NULL;
  }
  return stack -> array[stack -> top--];
}

int is_full(Stack * stack) {
	return stack->top == (stack -> capacity - 1);
}

void free_stack(Stack * stack) {
	free((void *)(stack -> array));
	free(stack);
}

const void * peek(Stack *stack){
	if(is_empty(stack)){
		return NULL;
	}
	return stack -> array[stack -> top];
}
