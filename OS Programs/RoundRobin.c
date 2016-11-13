#include<stdio.h>
#include<conio.h>
int p[10],tq,n,q[10],flag[10],tat[10],abc[20];
int countFlag()
{
 int i,count=0;
 for(i=0;i<n;i++)
    if(flag[i]==1)
    {
      count++;
    }
 return count;
}
void main()
{
  int i=0,sum=0,x=0,tat_sum=0,wait_sum=0,m;
  float tat_avg,wait_avg;
  clrscr();
  printf("Enter Number of processes");
  scanf("%d",&n);
  printf("\nEnter Burst time\n");
  for(i=0;i<n;i++)
    {
      scanf("%d",&p[i]);
      flag[i]=0;
      q[i]=p[i];
    }
  printf("\nEnter Time Quantum");
  scanf("%d",&tq);

  while(countFlag()!=n)
  {
    for(i=0;i<n;i++)
    {
      if(flag[i]==0)
       {

     printf("  P%d   ",i);
     if(q[i]<=tq)
      {
        flag[i]=1;
        sum=sum+q[i];
      }
      else
      {
        sum=sum+tq;
        q[i]=q[i]-tq;
      }
      tat[i]=sum;
      abc[x++]=sum;
       }
    }
  }
  printf("\n");
  printf("0  ");
  for(i=0;i<x;i++)
  printf("  %d   ",abc[i]);
  printf("\nTurn around time:");
  for(i=0;i<n;i++)
   {
     tat_sum=tat_sum+tat[i];
     printf("\n P%d---%d  ",i,tat[i]);
   }
   tat_avg=(float)tat_sum/n;
  printf("\nAverage Turn around time:%f",tat_avg);
  printf("\nWaiting Time:");
  for(i=0;i<n;i++)
  {
   m=tat[i]-p[i];
   wait_sum=wait_sum+m;
   printf("\n P%d---%d ",i,m);
  }
  wait_avg=(float)wait_sum/n;
  printf("\nAverage Waiting time:%f",wait_avg);
  getch();
}

