#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
struct info
{
	float arival_time,waiting_time,burst_time,turn_around_time,order;
	
};
void fcfs(int n)
{
	struct info process[n];
  struct info temp;
  int i,j;
  float TotalTurnAroundTime,TotalBurstTime;
  
   for(i=0;i<n;i++)
 {fflush(stdin);
       process[i].order=i+1;
 	printf("\n Enter the Arrival Time for Process %d :",i+1);
 	scanf("%f",&process[i].arival_time);
 	printf("\n Enter the Burst Time for Process %d :",i+1);
 	scanf("%f",&process[i].burst_time);
 }
for(j=1;j<n;j++)
for(i=0;i<n-1;i++)
{
  	if(process[i].arival_time>process[i+1].arival_time)
  	            { temp=process[i];
  	              process[i]=process[i+1];
  	              process[i+1]=temp;
				}
                  
}
  process[0].waiting_time=0;
  process[0].turn_around_time=process[0].burst_time;
  TotalBurstTime=process[0].burst_time;
  TotalTurnAroundTime=process[0].burst_time;
  for(i=1;i<n;i++)
  {
  	process[i].waiting_time=TotalBurstTime-process[i].arival_time;
  	process[i].turn_around_time=process[i].burst_time+process[i].waiting_time;
  	TotalBurstTime+=process[i].burst_time;
  	TotalTurnAroundTime+=process[i].turn_around_time;
  }
  printf("\n Average Turn Around Time With FCFS %.2f",TotalTurnAroundTime/n);
 /* for(i=0;i<n;i++)
  {
  	printf("\n\nwaiting time for process %d :%.2f",i+1,process[i].waiting_time);
  	printf("\nturn around time for process %d :%.2f",i+1,process[i].turn_around_time);
  }*/
}
struct info min(struct info process[],int i,int n)
{
	struct info min=process[i];
struct info temp;
	int j,flag;
	for(j=i;j<n;j++)
	{
		if(min.arival_time>process[j].arival_time)
		{      min=process[j];
		       flag=j;
		}
		else if(min.arival_time==process[j].arival_time && min.burst_time>process[i].burst_time)
	                      {
	                      	min=process[j];
	                      	
						  }
	}

	return min;
}
void sjf(int n,int l)
{
	
}
int main()
{
int n,N;
printf("\n Enter the number of process You want to execute :");
scanf("%d",&n);
printf("\n Please select sceduling meathod you want to choose :");
printf("\n 1.First Come First Surve");
printf("\n 2.Shortest Job First");
printf("\n 3.Shortest Job If CPU is Idle for 1 unit time");
printf("\n ->Enter your choice :");
scanf("%d",&N);
switch(N)
{
	case 1 : fcfs(n);
	          break;
	case 2 : sjf(n,0);
	            break;
	case 3: sjf(n,1);
	           break;
	default : printf("\n You have enter the wrong choice");		               
}
	return 0;
}
