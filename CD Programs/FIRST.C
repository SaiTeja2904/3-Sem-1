#include<stdio.h>
#include<string.h>
#include<ctype.h>
int n,m=0,p,i=0,j=0;
char a[10][10],followResult[10];
void follow(char c);
void first(char c);
int isExisting(char);
void addToResult(char);
int main()
 {
 int i;
 int choice;
 char c,ch;
 clrscr();
 printf("Enter the no.of productions: ");
 scanf("%d", &n);
 printf(" Enter %d productions\nProduction with multiple terms should be give as separate productions \n", n);
 for(i=0;i<n;i++)
  scanf("%s%c",a[i],&ch);
  do
  {
  m=0;
  printf("Find FIRST of -->");
  scanf(" %c",&c);
  m=0;
  first(c);
  printf("FIRST(%c) = { ",c);
  for(i=0;i<m;i++)
   printf("%c ",followResult[i]);
   printf(" }\n");
  printf("Do you want to continue(Press 1 to continue....)?");
  scanf("%d%c",&choice,&ch);
 }
 while(choice==1);
}
void first(char c)
{
      int k;
		 for(k=0;k<n;k++)
                 {
                 if(a[k][0]==c)
                 {
		 /*if(isExisting(a[k][2])){
		    followResult[m++]=a[k][2];
		    }
		 else*/ if(!isupper(a[k][2])){
		  if(isExisting(a[k][2])){
		     followResult[m++]=a[k][2];
		    }
		  }
		 else if(a[k][2]==c)
		 {
		 }
		 else
		   first(a[k][2]);
                 }
                 }
}

int isExisting(char c)
{
  for(i=0;i<m;i++)
   {
     if(followResult[i]==c)
       return 0;
   }
   return 1;
}

