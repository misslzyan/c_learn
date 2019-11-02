#include "LinkedList.h"
#include <stdlib.h>
#include <stdio.h>

Node * newNode(void * d) {
	Node *node = malloc(sizeof(Node));
	node->data = d;
	node->next = NULL;
	return node;
}

LinkedList * newList() {
	LinkedList *list = malloc(sizeof(LinkedList));
	list->head = NULL;
	list->tail = NULL;
	return list;
}

void add_ll(LinkedList * list, void * d){
	if(list == NULL) return;
	Node *node = newNode(d);
	if(list->head==NULL){
		printf("1\n");
		list->head=list->tail=node;
	}else{
		printf("2\n");
		list->tail->next=node;
		list->tail=node;
	}
}

void print_ll(LinkedList *list){
	if(list==NULL)return;
	Node* p = list->head;
	while(p!=list->tail){
		printf("%c\t", *((char*)p->data));
		p = p->next;
	}
	if(p!=NULL)
	  printf("%c\t", *(char*)(p->data));
	printf("\n");
}

int len(LinkedList * list){
	int n=0;
	if(list==NULL) return n;
	Node * h = list->head;
	while(h!=list->tail){
		h = h->next;
		n++;
	}
	return n+1;
}
