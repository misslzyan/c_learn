#ifndef __stack_h
#define __stack_h
#define MAX_SIZE 2048
typedef struct {
	const void **array;
	int top;
	unsigned int capacity;
} Stack;

Stack* newStack(int);

int is_empty(Stack *);

void push(Stack *, const void *);

const void * pop(Stack *); 

int is_full(Stack *);

void free_stack(Stack *);

const void * peek(Stack *);

#endif