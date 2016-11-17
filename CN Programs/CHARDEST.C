#include<stdio.h>
#include<conio.h>


void main()
{
   char a[20];
   int i=0,k,h;
   clrscr();
   printf("Enter your data:");
   gets(a);
   for(i=0;a[i]!='\0';i++)
   {
     if(a[i]=='E' && a[i+1]=='S' && a[i+2]=='C')
     {
	k=i;h=1;
	break;
     }
   }

   if(h==1){
     for(;a[k+3]!='\0';k++)
	a[k]=a[k+3];
	a[k]='\0';}
   printf("The Output data is ");
   puts(a);
   getch();
}