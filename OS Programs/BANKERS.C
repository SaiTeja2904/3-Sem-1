#include<stdio.h>
#include<conio.h>
int max[10][10],alloc[10][10],avail[10],need[10][10],pro,res;
int order[10],abc[10],flag[10];
void main()
{
  int i,j,z=0,x=0,sum=0,k;
  clrscr();
  printf("\nEnter number of resources ");
  scanf("%d",&res);
  printf("\nEnter number of processes ");
  scanf("%d",&pro);
  printf("\nEnter given resources");
  for(i=0;i<res;i++)
  {
   scanf("%d",&abc[i]);
  }
  printf("\nEnter max");
  for(i=0;i<pro;i++)
  {
    for(j=0;j<res;j++)
    {
      scanf("%d",&max[i][j]);
      flag[i]=0;
    }
  }
  printf("\nEnter allocated values");
  for(i=0;i<pro;i++)
  {
   for(j=0;j<res;j++)
    {
      scanf("%d",&alloc[i][j]);
      need[i][j]=max[i][j]-alloc[i][j];
    }
  }
  for(i=0;i<res;i++)
  {
    avail[i]=0;
    for(j=0;j<pro;j++)
    {
      avail[i]=avail[i]+alloc[j][i];
    }
    avail[i]=abc[i]-avail[i];
  }
  for(z=0;z<pro;z++)
  {
    for(i=0;i<pro;i++)
    {
      if(flag[i]==0)
      {
       sum=0;
       for(j=0;j<res;j++)
       {
	 if(avail[j]>=need[i][j])
	 {
	  sum++;
	 }
	 if(sum==res)
	 {
	   order[x]=i;
	   x++;
	   flag[i]=1;
	   for(k=0;k<res;k++)
	   {
	     avail[k]=avail[k]+alloc[i][k];
	   }
	 }
       }
      }
    }

}
if(x==pro)
{
  printf("\nSafe Sequence is ");
  for(i=0;i<pro;i++)
  {
    printf("%d  ",order[i]);
  }
}
else
printf("\n Dead Lock..!");
  getch();
}