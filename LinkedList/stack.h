#include<stdio.h>
#include<stdlib.h>

typedef struct st{
	int size;
	int top;
	int *a;
	
}stack;

void Screate(stack *st){
	st->size = 10;
	st->a = (int*)malloc(st->size*sizeof(stack));
	st->top = -1;
	
}

void push(stack *st,int x){
	if(st->top==st->size-1){
		printf("\nStack Overflow\n");
	}else{
		st->top++;
		st->a[st->top] = x;
	}
}

int pop(stack *st){
	int x = -1;
	if(st->top<0){
		printf("\nStack Underflow\n");
	}else{
		x = st->a[st->top];
		st->top--;
	}
	
	return x;
}

void Sdisplay(stack *st){
	int i;
	for(i=st->top;i>=0;i--){
		printf("%d\n",st->a[i]);
	}
}

int isEmpty(stack *st){
	if(st->top == -1){
		return 1;
	}else{
		return 0;
	}
}
