#include<stdio.h>
#include<stdlib.h>




struct node {
	int data;
	struct node *next;
};

struct node *ptr;

void insert(struct node *NODE,int key){
	if(NODE == NULL){
		NODE = (struct node *)malloc(sizeof(struct node));
		NODE->data = key;
		NODE->next = NULL;
		ptr = NODE;
	}else{
		struct node *temp;
		temp = (struct node *)malloc(sizeof(struct node));
		temp->data = key;
		temp->next = NULL;
		ptr->next = temp;
		ptr = temp;
	}
}

int Search(){


}


void display(){


}




