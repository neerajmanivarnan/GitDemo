#include<stdio.h>
#include<stdlib.h>


struct node{
	int data;
	struct node *nxt;
};


struct node *head=NULL;
struct node *ptr;

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

void insertNode(int key,int value){
	struct node *ptr1;
	ptr1 = head;
	int flag = 0;
	while(ptr1!=NULL){
		if(ptr1->data==key){
			struct node *temp;
			temp = (struct node *)malloc(sizeof(struct node));
			temp->data = value;
			temp->nxt = ptr1->nxt;
			ptr1->nxt = temp;
			flag = 1;
			break;
		}else{
			ptr1 = ptr1->nxt;
		}
	}
	
	if(flag == 0){
		printf("\nSearch Uncessfull\n");
	}

}




void display(){
	struct node *pointer;
	pointer = head;
	while(pointer!=NULL){
		printf("%d\n",pointer->data);
		pointer = pointer->nxt;
	}
}

int main(){
	
	int n,num,value,key;
	
	
	while(n!=4){
		printf("\n\n---------MENU----------\n\n");
		printf("1-add a node\n");
		printf("2-display linked list\n");
		printf("3-insert after key\n");
		printf("4-exit\n");
		
		printf("Enter your Choice : \n");
		scanf("%d",&n);
		
		if(n==1){
			printf("Enter the number you want to add to the list : \n");
			scanf("%d",&num);
			getNode(num);
		}else if(n==2){
			display();
		}else if(n==3){
			printf("Enter the value of whcich yo have to insert after : \n");
			scanf("%d",&key);
			printf("Enter the data to be entered : \n");
			scanf("%d",&value);
			insertNode(key,value);
		}else if(n==4){
			continue;
		}
	}
	
	
	
	
	

}
