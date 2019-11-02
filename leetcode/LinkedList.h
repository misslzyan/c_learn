#ifndef LINKEDLIST
#define LINKEDLIST

typedef struct node {
	struct node * next;
	void * data;
} Node;

typedef struct {
  Node* head;
  Node* tail;
} LinkedList;

Node * newNode(void *);

LinkedList * newList();

void print_ll(LinkedList *);

void add_ll(LinkedList *, void *);

int len(LinkedList * list);

#endif