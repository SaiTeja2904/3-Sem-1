#include<stdio.h>
#include<conio.h>

void main()
{
  int p[20],pr[20],bt[20],wt[20],tat[20],n,i,pos,j,temp,sum,wait_sum=0,tat_sum=0;
  float wait_avg,tat_avg;
  clrscr();
  printf("Enter number of processes:");
  scanf("%d",&n);
  for(i=0;i<n;i++)
   {
     printf("\nEnter P%d Burst time,Priority:",i+1);
     scanf("%d",&bt[i]);
     /*printf("\nEnter P%d Priority:",i+1);*/
     scanf("%d",&pr[i]);
     p[i]=i+1;
   }

   for(i=0;i<n;i++)
   {
     pos=i;
     for(j=i+1;j<n;j++)
      {
	if(pr[j]<pr[pos])
	 pos=j;
      }
      temp=pr[i];
      pr[i]=pr[pos];
      pr[pos]=temp;

      temp=bt[i];
      bt[i]=bt[pos];
      bt[pos]=temp;

      temp=p[i];
      p[i]=p[pos];
      p[pos]=temp;

   }
   sum=0;
   printf("\nGANTT chart\n");
   for(i=0;i<n;i++)
   {
      printf("  P%d\t",p[i]);
   }
   printf("\n");
   printf("%d\t",sum);
   for(i=0;i<n;i++)
   {
     wt[i]=sum;
     sum=sum+bt[i];
     printf("%d\t",sum);
   }
   printf("\nWaiting Time");
   for(i=0;i<n;i++)
    {
      printf("\nP%d---%d",p[i],wt[i]);
      wait_sum=wait_sum+wt[i];
    }
   wait_avg=(float)wait_sum/n;
   printf("\nAverage waiting time is %f",wait_avg);
   sum=0;
   printf("\nTurn Around Time ");
   for(i=0;i<n;i++)
   {
     tat[i]=wt[i]+bt[i];
     printf("\nP%d---%d",p[i],tat[i]);
     tat_sum=tat_sum+tat[i];
   }
   tat_avg=(float)tat_sum/n;
   printf("\nAverage turn around time is%f",tat_avg);
  getch();
}
