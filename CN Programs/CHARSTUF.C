#include<stdio.h>
#include<conio.h>
#include<string.h>


void main()
{
   char a[100],b[100];
   int i=0,c=0,k,h;
   clrscr();
   printf("Enter your data:");
   gets(a);
   for(i=0;a[i]!='\0';i++)
   {
     if(a[i]=='f' && a[i+1]=='l' && a[i+2]=='a' && a[i+3]=='g')
     {
	 h=1;
	 while (c < strlen(a)-i) {
	 b[c] = a[i+c];
          c++;}
        b[c] = '\0';
       break;
     }
     else if(a[i]=='e' && a[i+1]=='s' && a[i+2]=='c')
     {
	   h=1;
	 while (c < strlen(a)-i) {
	 b[c] = a[i+c];
          c++;}
        b[c] = '\0';
       break;
     }


   }
   if(h==1)
   {
   /*Inserting ESC*/
   k=i;
       a[k++]='E';
       a[k++]='S';
       a[k++]='C';
       a[k]='\0';
       strcat(a,b);

   }
   printf("The Output data is ");
   puts(a);
   getch();
}