#include<stdio.h>
#include<stdlib.h>


typedef struct {
	int pid;
	int burstTime;
	int priority;
	int arrivalTime;
	int waitingTime;
	int TAT;
}process;




void nonpr(process *pr,int num){
	int i,j,awtc=0,atatc=0,count=0;
	process temp;
	double awt;
	double atat;
	double tp;
	//process swapping according to priority
	for(i=0;i<num-1;i++){
		for(j=0;j<num-i-1;j++){
			if(pr[j].priority>pr[j+1].priority){
				temp.pid = pr[j].pid;
				temp.burstTime = pr[j].burstTime;
				temp.priority = pr[j].priority;
				temp.arrivalTime = pr[j].arrivalTime;
				temp.waitingTime = pr[j].waitingTime;
				temp.TAT = pr[j].TAT;
				pr[j].pid = pr[j+1].pid;
				pr[j].burstTime = pr[j+1].burstTime;
				pr[j].priority = pr[j+1].priority;
				pr[j].arrivalTime = pr[j+1].arrivalTime;
				pr[j].waitingTime = pr[j+1].waitingTime;
				pr[j].TAT = pr[j+1].TAT;
				pr[j+1].pid = temp.pid;
				pr[j+1].burstTime = temp.burstTime;
				pr[j+1].priority = temp.priority;
				pr[j+1].arrivalTime = temp.arrivalTime;
				pr[j+1].waitingTime = temp.waitingTime;
				pr[j+1].TAT = temp.TAT;
				
							
			}
		}
	}
	
	pr[0].waitingTime = 0;
	for(i=1;i<num;i++){
		pr[i].waitingTime = pr[i-1].waitingTime + pr[i-1].burstTime;
	}
	
	for(i=0;i<num;i++){
		pr[i].TAT = pr[i].waitingTime + pr[i].burstTime;
	}
	
	//average waiting time
	
	for(i=0;i<num;i++){
		awtc = awtc + pr[i].waitingTime;
	}
	
	awt = awtc/num;
	
	//average turn around time
	
	for(i=0;i<num;i++){
		atatc = atatc + pr[i].TAT;
	}
	
	atat = atatc/num;
	
	//though put;
	
	//table showing turn aorund time and waiting time
	
	printf("\nProcess\t\tWaiting Time\t\tTurn Around Time\n");
	for(i=0;i<num;i++){
		printf("%d\t\t%d\t\t\t%d\n",pr[i].pid,pr[i].waitingTime,pr[i].TAT);
	}
	
	//ganth chart
	
	printf("\nPrinting the ghanth chart\n");
	
	
	for(i=0;i<num;i++){
		printf("Process P%d\t",pr[i].pid);
	}
	printf("\n");
	for(i=0;i<num;i++){
		printf("%d\t\t",count);
		count = count + pr[i].burstTime;
	}
	
	printf("\n");
	
}

/*void pr(process *pr,int num){


}*/

int main(){
	
	int n,i,choice;
	process *p;
	
	printf("Enter the number of Processes : "); 
	scanf("%d",&n);
	
	p = (process *)malloc(n*sizeof(process));
	
	for(i=0;i<n;i++){
		p[i].pid=i+1;
		printf("Enter the Burst Time of the process %d ",i+1);
		scanf("%d",&p[i].burstTime);
		printf("Enter the Arrival Time of the process %d ",i+1);
		scanf("%d",&p[i].arrivalTime);
		printf("Enter the priority of the process %d ",i+1);
		scanf("%d",&p[i].priority);
		
		
	}
	
	printf("\n------------------MENU----------------\n");
	printf("1 : Non-Premptive\n");
	printf("2 : Premptive\n");
	
	printf("Enter Choice : ");
	scanf("%d",&choice);
	
	switch(choice){
		case 1:
		nonpr(p,n);
		break;
		case 2:
		//pr(&p,n);
		break;
		default:
		break;
	}
	
	return 0;
}
