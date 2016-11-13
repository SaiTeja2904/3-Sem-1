#include<stdio.h>
#include<conio.h>
#include<math.h>
int h,n,max,a[30];
void doSort();
void scan()
{
  int i,temp;
  doSort();
  for(i=0;i<n-1;i++)
  {
    if(a[i]<=h && h<=a[i+1])
    break;
  }
  temp=i;
  printf("%d->>",h);
  for(i=temp;i>=0;i--)
  {
    printf("%d->>",a[i]);
  }
  printf("0->>");
  for(i=temp+1;i<n-1;i++)
  {
    printf("%d->>",a[i]);
  }
  printf("%d",a[i]);
}
void doSort()
{
int i,j,t;
for(i=0;i<n-1;i++)
	  for(j=i+1;j<n;j++)
	     if(a[i]>=a[j])
	     {
	      t=a[i];
	      a[i]=a[j];
	      a[j]=t;
	     }
}
void cscan(){
	int i,j,temp;
	doSort();
	for(i=0;i<n;i++)
	{
	 if(h<=a[i])
	   break;
	}
	temp=i;
	printf("%d->>",h);
	for(j=temp;j<n;j++){
	printf("%d->>",a[j]);
	}
	printf("%d->>0->>",max);
	for(j=0;j<i-1;j++)
	{
	  printf("%d->>",a[j]);
	}
	printf("%d",a[j]);
}
void clook(){
	int i,j,temp;
	doSort();
	for(i=0;i<n;i++)
	{
	 if(h<=a[i])
	   break;
	}
	temp=i;
	printf("%d->>",h);
	for(j=temp;j<n;j++){
	printf("%d->>",a[j]);
	}
	for(j=0;j<i-1;j++){printf("%d->>",a[j]);}
	printf("%d",a[j]);
}
void fcfs()
{
  int i;
   printf("%d->>",h);
   for(i=0;i<n-1;i++)
   {
    printf("%d->>",a[i]);
   }
   printf("%d",a[i]);
}
void stfs()
{
  int m=999,j,p,i;
    printf("%d->>",h);
  for(i=0;i<n;i++)
  {
   m=999;
    for(j=0;j<n;j++)
     {
      if(abs(h-a[j])<m)
        {
	  m=abs(h-a[j]);
          p=j;
        }
     }
   h=a[p];
   printf("%d->>",a[p]);
   a[p]=999;
  }
}

void main()
{
 int i,ch;
 clrscr();
 printf("\nEnter Head Start");
 scanf("%d",&h);
 printf("\nEnter max");
 scanf("%d",&max);
printf("\nEnter total number of processes");
 scanf("%d",&n);
 printf("\nEnter processes values");
 for(i=0;i<n;i++)
  scanf("%d",&a[i]);
 printf("\nEnter your choice\n1.Scan\n2.C-Scan\n3.C-Look\n4.FCFS\n5.STFS");
 scanf("%d",&ch);
 switch(ch)
 {
   case 1:scan();
	  break;
   case 2:cscan();
	  break;
   case 3:clook();
	  break;
   case 4:fcfs();
	  break;
   case 5:stfs();
	  break;
   default:printf("\nInvalid Choice");
 }
 getch();
}
