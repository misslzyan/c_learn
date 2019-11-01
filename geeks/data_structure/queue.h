#ifndef MYQUEUE
#define MYQUEUE

struct Qnode{
	void * d;
	struct Qnode *next;
};

typedef struct Queue{
	struct Qnode *front, *rear;
} Myqueue;

struct Qnode* createQnode(void* const);

struct Queue* createQueue(void);

int empty_queue(struct Queue*);

void en_queue(struct Queue*, void* const);

struct Qnode* de_queue(struct Queue*);

void free_queue(Myqueue *);

#endif