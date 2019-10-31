#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Stack{
	int top;
	unsigned capacity;
	char* array;
};

//function to create a stack of given capacity. It initializes size of stack as 0
struct Stack* createStack(unsigned capacity)
{
	struct Stack* stack = (struct Stack*) malloc(sizeof(struct Stack));
	stack -> capacity = capacity;
	stack -> top = -1;
	stack -> array = (char*)malloc(stack->capacity * sizeof(char));
	return stack;
};

//Stack is full when top is equal to the last index.
bool isFull(struct Stack* stack){
	return stack->top == stack->capacity-1;
}

//Stack is empty when top is equal to -1
bool isEmpty(struct Stack* stack) {
	return stack->top == -1;
}


//Function to add an item to stack.It increase top by 1.
void push(struct Stack* stack , char item) {
	if(isFull(stack)){
		return;
	}
	stack->array[++stack->top] = item;
	// printf("%c pushed to stack\n", item);
}

//Function to remove an item from stack. It decrease top by 1.
char pop(struct Stack* stack){
	if(isEmpty(stack)){
		return '\0';
	}
	return stack->array[stack->top--];
}

//Function to return the top from stack without removing it.
char peek(struct Stack* stack) {
	if(isEmpty(stack)){
		return '\0';
	}
	return stack->array[stack->top];
}


bool isValid(char * s){
	if(*s=='\0') return true;
	struct Stack* stack = createStack(100);
	char ch;
	while((ch=*s++)){
      if(ch=='['||ch=='{'||ch=='('){
      	push(stack, ch);
      }else{
      	char tmp = pop(stack);
      	switch(ch){
      		case ']':
      		   if(tmp!='[')
      		   	  return false;
      		   break;
      		case '}':
      		   if(tmp!='{')
      		   	  return false;
      		   break;
      		case ')':
      		   if(tmp!='(')
      		   	  return false;
      		   	break;
      		default:
      		    return false;
      	}
      }

	}
	if(isEmpty(stack))
	    return true;
    else 
    	return false;
}

bool isValid0(char* s){
	int pointer = 0;
	for(int i=0;s[i]!='\0';i++){
		if(pointer&& (s[i]-s[pointer-1]+1)/2==1){
			// printf("%d\n", pointer);
			pointer--;
		}else{
			// printf("%d\n", pointer);
			s[pointer++]=s[i];
		}
	}
	if(pointer){
		return false;
	}else{
		return true;
	}
}


int main() {
	char s[] = "([)]";
	bool ret = isValid(s);
	// printf("%s\n", s);
	bool ret2 = isValid0(s);
	printf("%s\n", ret==false?"false":"true");
	printf("%s\n", ret2==false?"false":"true");
	// printf("%d %d\n", '[',']');
	// printf("%d %d\n", '(',')');
	// printf("%d %d\n", '{','}');
	// printf("%c\n", 92);
}