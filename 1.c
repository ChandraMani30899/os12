#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
void fcfs(int n)
{
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
