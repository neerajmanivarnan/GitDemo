#include<stdio.h>
#include<stdlib.h>

typedef struct{

	int size;
	int top;
	int *S;

}stack;

void Create(stack *s1){
	
	printf("Enter the size of the stack : ");
	scanf("%d",&s1->size);
	s1->top = -1;
	s1->S = (int *)malloc(s1->size*sizeof(int));

}

void Display(stack st){
	int i;
	for(i=st.top;i>=0;i--){
		printf("%d\n",st.S[i]);
	}
	//printf("\n");
	
}

//the push funtion doesnot return any value
void push(stack *s1,int x){
	
	if(s1->top >= s1->size-1){
		printf("Stack Overflow\n");
	}else{
		s1->top+=1;
		s1->S[s1->top] = x;
	}
	
}

int pop(stack st){
	
	int x = -1;
	if(st.top<=-1){
		printf("Stack Underflow\n");
	}else{
		x = st.S[st.top];
		st.top--;
	}
	
	return x;
	

}

int main(){

	stack s1;
	Create(&s1);
	push(&s1,10);
	push(&s1,20);
	push(&s1,30);
	
	Display(s1);
	


	return 0;
}
