#include<stdio.h>
#include<stdlib.h>

struct node {

	int data;
	struct node *next;

};

struct node *front = NULL;
struct node *rear = NULL;

void enque(int x){
	struct node *p;
	p = (struct node *)malloc(sizeof(struct node));
	if(p == NULL){
		printf("Que Full\n");
	}else{
		p->data = x;
		p->next = NULL;
		if(front == NULL){
			front = rear = p;	
		}else{
			rear->next = p;
			rear = p;
		}
	}

}


int deque(){
	int x = -1;
	struct node *t;
	
	if(front == NULL){
		printf("Que is empty\n");
	}else{
		x = front->data;
		t = front;
		front = front->next;
		free(t);
		
	}
}


void display(){
	struct node *ptr;
	ptr = front;
	
	while(ptr!=NULL){
		printf(" %d ",ptr->data);
		ptr = ptr->next;
	}
	printf("\n");

}


int main(){
	enque(10);
	enque(20);
	enque(30);
	enque(40);
	enque(50);
	enque(60);
	
	display();
	
	deque();
	deque();
	
	display();

	return 0;
}
