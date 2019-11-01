/*Queue implement with linked list*/
#include "queue.h"
#include <stdlib.h>
#include <stdio.h>

struct Qnode* createQnode(void * const data) {
	struct Qnode *node = malloc(sizeof(struct Qnode));
	node->d=data;
	node->next=NULL;
	return node;
}

struct Queue* createQueue(void){
	struct Queue *queue = malloc(sizeof(struct Queue));
	queue->front=queue->rear=NULL;
	return queue;
}

void en_queue(struct Queue *queue, void* const data) {
	struct Qnode *node = createQnode(data);
	if(queue->rear==NULL){
		queue->front=queue->rear=node;
	} else {
		queue->rear->next=node;
		queue->rear=node;
	}
}

struct Qnode* de_queue(struct Queue *queue) {
	if(queue->rear==NULL){
		return NULL;
	}
	struct Qnode *ret = queue->front;
	if(ret==queue->rear){
		queue->front=queue->rear=NULL;
	}else{
		queue->front = queue->front->next;
	}
	ret->next=NULL;
	return ret;
}

int empty_queue(struct Queue *queue){
	return queue==NULL || queue->front==NULL;
}

void free_queue(Myqueue * queue){
	struct Qnode *node = queue->front;
	struct Qnode *nxt;
	while(node!=NULL){
		nxt = node->next;
		free(node);
		node=nxt;
	}
	free(queue);
}