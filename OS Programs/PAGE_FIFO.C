#include<stdio.h>
#include<conio.h>
#include<time.h>
int faults=0,n,frames[10],fr;
int isExisting(int dhoni)
{
 int i;
 for(i=0;i<fr;i++)
  {
    if(frames[i]==dhoni)
     return 1;
  }
  return 0;
}
void main()
{
  int a[30],z=0,temp,i,j;
  clrscr();
  printf("\nEnter number of memory references");
  scanf("%d",&n);
  printf("\nEnter memory references");
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  printf("Enter frame size");
    scanf("%d",&fr);
  for(i=0;i<fr;i++)
     frames[i]=999;
  for(i=0;i<n;i++)
   {
     if(isExisting(a[i]))
      {

      }
     else
      {
	 temp=(z++)%fr;
	 frames[temp]=a[i];
	 faults++;
	 for(j=0;j<fr;j++)
	 {
	 printf(" %d",frames[j]);

	 }
	 printf("\n");
      }
   }
   printf("\nNumber of page faults are %d",faults);
   getch();
}