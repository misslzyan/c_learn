#include <stdio.h>
#include <stdlib.h>
#include "queue.h"
struct node {
	int data;
	struct node *left;
	struct node *right;
};

struct node* newNode(int data) {
	struct node *node;
	node = (struct node*)malloc(sizeof(struct node));
	node->data = data;
	node->left = NULL;
	node->right = NULL;
	return node;
}

void inorder(struct node* root){
	if(root==NULL) return;
	inorder(root->left);
	printf("%d ", root->data);
	inorder(root->right);
}

void insert(struct node* tree, struct node* data){
	struct Queue *queue = createQueue();
	if(tree==NULL) {
		tree=data;
		return;
	}
	en_queue(queue, tree);
	while(!empty_queue(queue)){
		struct Qnode *node = de_queue(queue);
		struct node *n   = ((struct node*)node->d);
		if(n->left!=NULL){
			en_queue(queue,n->left);
		}else{
			n->left=data;
			return;
		} 
		if(n->right!=NULL){
			en_queue(queue,n->right);
		}else{
			n->right=data;
			return;
		}

	}
	free_queue(queue);
}

void free_tree(struct node * node){
	if(node!=NULL){
		free_tree(node->left);
		free_tree(node->right);
		free(node);
	}
}


int main(){
	struct node *bt = newNode(10);
	bt->left = newNode(11);
	bt->right = newNode(9);
	bt->left->left = newNode(7);
	bt->right->right=newNode(8);
	bt->right->left=newNode(15);
	inorder(bt);
	printf("\n");
	insert(bt,newNode(12));
	inorder(bt);
	printf("\n");
	free_tree(bt);
}