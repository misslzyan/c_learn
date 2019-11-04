#ifndef __stack_h
#define __stack_h
#define MAX_SIZE 1024
typedef struct {
	void *data[MAX_SIZE];
	int top;
} stack;
stack* Stack(int);
int is_empty(stack *);
void push(stack *, const void *);
const void * pop(stack *); 
#endif