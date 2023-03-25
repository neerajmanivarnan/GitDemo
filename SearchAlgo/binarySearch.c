#include<stdio.h>
#include<stdlib.h>


int main(){

	int n,*a,i,j,temp,s,flag = 0;
	int l,u,mid;
	printf("Enter the size of the array : ");
	scanf("%d",&n);
	
	a = (int *)malloc(n*sizeof(int));
	
	printf("Enter the values : \n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	printf("Enter the value to search : ");
	scanf("%d",&s);
		
	//sorting for binary search
		
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		
		}
		
	}
	
	l = 0;
	u = n-1;
	
	while(l<=u){
		mid = (l+u)/2;
		if(a[mid] == s){
			flag = 1;
			break;
		}else{
			if(a[mid]<s){
				l = mid;
				
			}else{
				u = mid;
			}
		
		}
	
	}
	
	
	if(flag == 0){
		printf("Item not found ");
	
	}else{
		printf("Item found at position %d",mid+1);
	}
	
	
	
	
	
	




	return 0;
}



