#include<stdio.h>
#include<stdlib.h>

struct tree {
	struct tree *lc;
	int data;
	struct tree *rc;
};

typedef struct {

	int size;
	int front;
	int rear;
	struct tree **a;


}que;


/*void display(que *q){
	int i;
	for(i=q->front+1;i<=q->rear;i++){
		printf("%d ",q->s[i]);
	}
	printf("\n");

}*/


void create(que *q,int sz){

	/*printf("Enter the size of the que : ");
	scanf("%d",&q->size);*/
	q->size = sz;
	q->a = (struct tree *)malloc(q->size*(sizeof(struct tree)));
	q->front = -1;
	q->rear = -1;

}

void enque(que *q,struct tree *x){
	if(q->rear==q->size-1){
		printf("\nQue is full\n");
	}else{
		q->rear++;
		q->s[q->rear]=x;
	}

}

int deque(que *q){
	struct tree  *x ;
	if(q->front == q->rear ){
		printf("Que Underflow");
		//return x;
	}else{
		q->front++;
		x = q->s[q->front];
		//return x;
	}
	return x;

}

int isEmpty(que *q){
	if(q->front == q->rear){
		return 1;
	}else{
		return 0;
	}

}
