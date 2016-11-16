#include<stdio.h>
#include<conio.h>
#include<math.h>
int n,a[100],p[10],g=-1,p3[10],p2[10],c=2,i=0,j=0,k=0,l=0,m=0;
void main()
{
clrscr();
printf("enter the value of n:1 for odd parity , 0 for even parity");
scanf("%d",&n);
printf("enter data bits,-1 to stop");
      do
	{
	i++;
	if(pow(2,j)==i)
	{
	a[i]=c;
	j++;
	c++;
	}
	else
	{

	 scanf("%d",&a[i]);
	}
	g++;
	}while(a[i]!=-1);
p[1]=a[1];
p[2]=a[3];
p[3]=a[5];
p[4]=a[7];
p2[1]=a[2];
p2[2]=a[3];
p2[3]=a[6];
p2[4]=a[7];
p3[1]=a[4];
p3[2]=a[5];
p3[3]=a[6];
p3[4]=a[7];
if(n==1)
{

for(i=1;i<=4;i++)
	{
	    if(p[i]==1)
	    k++;
	    if(p2[i]==1)
	    l++;
	    if(p3[i]==1)
	    m++;

}
if(k%2==0)
a[1]=1;
else
a[1]=0;
if(l%2==0)
a[2]=1;
else
a[2]=0;
if(m%2==0)
a[4]=1;
else
a[4]=0;
}

else
{

for(i=1;i<=4;i++)
	{
	    if(p[i]==1)
	    k++;
	    if(p2[i]==1)
	    l++;
	    if(p3[i]==1)
	    m++;
	}
if(k%2==0)
a[1]=0;
else
a[1]=1;
if(l%2==0)
a[2]=0;
else
a[2]=1;
if(m%2==0)
a[4]=0;
else
a[4]=1;

}
printf("\n the parity bits are: \n");
printf("p1: %d\n",a[1]);
printf("p2: %d\n",a[2]);
printf("p3: %d\n",a[4]);
printf("\n The hamming code is: \n");
for(i=1;i<=g-1;i++)
{
printf( " %d\n",a[i]);
}
getch();
}
