#include<stdio.h>
#include<stdlib.h>
#include "q.h"



struct tree *root = NULL;

void buildTree(){


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
