#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a[]={0,12,25,40,14,23,18,12,4,9,24,29};
int i[]={24,36,18,27,7,20,31,20,0,11,22,33};
int h[]={20,31,19,8,30,19,6,0,14,7,22,9};
int k[]={21,28,36,24,22,40,31,19,22,10,0,9};
int j[20],m,min,l,ja=8,ji=10,jh=12,jk=6,x[4],z,p=65;
char abc[4]={'A','I','H','K'};
for(l=0;l<12;l++)
{
if(l!=9){
x[0]=ja+a[l];
x[1]=ji+i[l];
x[2]=jh+h[l];
x[3]=jk+k[l];
min=x[0];
for(m=0;m<4;m++)
{
if(x[m]<=min)
{
min=x[m];
z=m;
j[l]=min;
}
}
printf("\nFrom J to %c  %d via %c ",p++,j[l],abc[z]);
}
else
{
printf("\nFrom J to J  0  via -");
p++;
}
}
getch();
}
