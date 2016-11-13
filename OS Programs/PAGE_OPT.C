#include<stdio.h>
#include<conio.h>
int a[30],fr=0,frames[10],faults=0,n;
int getPosition(int p)
{
   int i,j,temp,max=-1,temp2;
   if(p+1==n)
   {
    return 0;
   }
   for(i=0;i<fr;i++)
   {
    if(frames[i]==-1)
     return i;
   }
   for(i=0;i<fr;i++)
   {
     temp=frames[i];
     for(j=p+1;j<n;j++)
     {
       if(a[j]==temp)
       {
	 if(max<j)
	  {
	      max=j;
	      temp2=i;
	  }
	  break;
       }
       else if(j==n-1)
       {
	 return i;
       }
     }
   }
   return temp2;
}
int isExisting(int x)
{
  int i;
  for(i=0;i<fr;i++)
  {
    if(frames[i]==x)
     return 1;
  }
  return 0;
}
void main()
{
  int i,temp,j;
  clrscr();
  printf("\nEnter number of inputs");
  scanf("%d",&n);
  printf("\nEnter inputs");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  printf("\nEnter Frame size");
  scanf("%d",&fr);
  for(i=0;i<fr;i++)
     frames[i]=-1;
  for(i=0;i<n;i++)
  {
    if(isExisting(a[i]))
    {
    }
    else
    {
     /*printf("**%d",a[i]);*/
     temp=getPosition(i);
     frames[temp]=a[i];
     faults++;
     for(j=0;j<fr;j++)
      printf(" %d",frames[j]);
     printf("\n");
    }
  }
  printf("Number of page faults are:%d",faults);
  getch();
}