#include<stdio.h>
#include<stdlib.h>


typedef struct {

	int size;
	int front;
	int rear;
	int *s;


}que;


void display(que *q){
	int i;
	for(i=q->front+1;i<=q->rear;i++){
		printf("%d ",q->s[i]);
	}
	printf("\n");

}


void create(que *q){

	printf("Enter the size of the que : ");
	scanf("%d",&q->size);
	q->s = (int *)malloc(q->size*(sizeof(int)));
	q->front = -1;
	q->rear = -1;

}

void enque(que *q,int x){
	if(q->rear==q->size-1){
		printf("\nQue is full\n");
	}else{
		q->rear++;
		q->s[q->rear]=x;
	}

}

int deque(que *q){
	int x = -1;
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

int main(){

	que q1;
	create(&q1);
	
	enque(&q1,10);
	enque(&q1,20);
	enque(&q1,30);
	
	display(&q1);
	
	deque(&q1);
	
	display(&q1);


	return 0;
}
