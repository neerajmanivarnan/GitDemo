#include<stdio.h>
#include<stdlib.h>
#include "stack.h"

struct node{
	int data;
	struct node *nxt;
};


struct node *head=NULL;
struct node *ptr;

struct node *Rhead = NULL;



void getNode(int item){

	
	if(head==NULL){
		head = (struct node*)malloc(sizeof(struct node));
		head->data = item;
		
		head->nxt=NULL;
		ptr = head;
	}else{
		struct node *temp;
		temp = (struct node *)malloc(sizeof(struct node));
		temp->data=item;
		
		temp->nxt=NULL;
		ptr->nxt = temp;
		ptr=temp;
		
	}

}


/*void NodeReverse(stack *st){
	struct node *ptr;
	int x;
	while(st->top!=-1){
		if(Rhead==NULL){
			
			head = (struct node*)malloc(sizeof(struct node));
			Rhead->data = x;
			
			Rhead->nxt=NULL;
			ptr = Rhead;
		}else{
			
			struct node *temp;
			temp = (struct node *)malloc(sizeof(struct node));
			temp->data=x;
			
			temp->nxt=NULL;
			ptr->nxt = temp;
			ptr=temp;
		
		}
	}

}*/


void display(){
	struct node *pointer;
	pointer = head;
	while(pointer!=NULL){
		printf("%d\n",pointer->data);
		pointer = pointer->nxt;
	}
	
	
}

void PushItem(stack *st){
	struct node *d;
	d = head;
	int x;
	while(d!=NULL){
		x = d->data;
		push(st,x);
		d=d->nxt;
	}
	d = head;
	while(st->top!=-1){
		if(Rhead==NULL){
			x = pop(st);
			Rhead = (struct node*)malloc(sizeof(struct node));
			Rhead->data = x;
			
			Rhead->nxt=NULL;
			d = Rhead;
		}else{
			x=pop(st);
			struct node *temp;
			temp = (struct node *)malloc(sizeof(struct node));
			temp->data=x;
			
			temp->nxt=NULL;
			d->nxt = temp;
			d=temp;
		
		}
	}

}

void Rdisplay(){
	struct node *pointer;
	pointer = Rhead;
	while(pointer!=NULL){
		printf("%d\n",pointer->data);
		pointer = pointer->nxt;
	}
}

int main(){
	stack *st;
	Screate(st);

	getNode(1);
	getNode(2);
	getNode(3);
	getNode(4);
	getNode(5);
	getNode(6);
	getNode(7);
	getNode(8);
	getNode(9);
	getNode(10);
	printf("Linked List : \n");
	display();
	PushItem(st);
	//NodeReverse(st);
	printf("\nLinked List After Reversal:\n");
	Rdisplay();
	
	return 0;
}
