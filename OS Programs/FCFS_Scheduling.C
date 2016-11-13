#include<stdio.h>
#include<conio.h>

void main()
{
  int n,i,bt[10];
  clrscr();
  printf("Enter Number of tasks");
  scanf("%d",&n);
  printf("\n");
  for(i=1;i<=n;i++)
  {  printf("Enter P%d's Burst Time",i);
     scanf("%d",&bt[i]);
  }

  printf("\nProcess---Burst Time");
  for(i=1;i<=n;i++)
  {
    printf("\n P%d---------%d",i,bt[i]);
  }
  //Gantt Chart
  printf("\nGANTT Chart:-\n");

  printf("------------------------------\n");
  printf("|");
  for(i=1;i<=n;i++)
   {
     printf(" P %d |",i);
   }
  printf("\n------------------------------\n");

  int sum=0;
  printf("%d",sum);

  for(i=1;i<=n;i++)
  {  sum=sum+bt[i];
     printf("    %d",sum);
  }
  //Waiting Table
  printf("\n\nWaiting Table\n");
  int wt[10];
  printf("Process----Waiting Time");
  wt[1]=0;
  printf("\nP1----------0");
  for(i=2;i<=n;i++)
  {
    wt[i]=wt[i-1]+bt[i-1];
    printf("\nP%d---------%d",i,wt[i]);
  }

  int tot=0;
  for(i=1;i<=n;i++)
  {
    tot=tot+wt[i];
  }
  float aw=tot/(float)n;
  printf("\nAverage Waiting Time is %f",aw);

  printf("\n\n\n\nTurn Around Time Table");
  printf("\nProcess---------TAT");
  int tat[10],ttat=0;
  for(i=1;i<=n;i++)
  {
    tat[i]=wt[i]+bt[i];
    printf("\n   %d-----------%d",i,tat[i]);
    ttat=ttat+tat[i];
  }
   float at=ttat/(float)n;
   printf("\nAverage Turn Around Time is  %f",at);

  getch();
}
