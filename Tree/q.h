#include<stdio.h>
#include<stdlib.h>


struct tree {
	struct tree *lc;
	int data;
	struct tree *rc;
};


struct node {
	int data;
	struct node *nxt;
};

struct tree *root=NULL;
struct node *que=NULL;
struct node *front;
struct node *rear;

int isEmpty(){
	

}
