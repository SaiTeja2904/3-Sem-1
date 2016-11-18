#include<stdio.h>
#include<conio.h>
#define size 30
char a[size];
int x;
void main()
{
clrscr();
printf("enter input string");
scanf("%s",&a);
if(E())
{
printf("string accepted");
}
else
{
printf("string not acc");

}
getch();

}

int E()
{

 if(T())
 {
  x++;
   if(a[x]=='d')
     {
	return 1;
     }
    return 0;
  }
  return 0;
}

int T()
{
if(a[x]=='c')
{
  x++;
  if(a[x]=='b')
   {
    x++;
     if(A())
      {
	return 1;
      }
     return 0;
    }
   return 0;
   }
return 0;
}

int A()
{
if(a[x]=='d')
{
return 1;
}
return 0;
}
/*
E=Td
T=cbA
A=d
*/
