#include<stdio.h>
#include<conio.h>
void keyword();
FILE *fp1,*fp2;
void main()
{
  clrscr();
  fp1=fopen("FIRST.c","r");
  keyword();
  fclose(fp1);
  getch();
}
void keyword()
{
 int c=0;
 char temp[100],key[100];
 fp2=fopen("keyword.txt","r");
 while(!feof(fp1))
  {
     fscanf(fp1,"%s",temp);
     while(!feof(fp2))
     {
       fscanf(fp2,"%s",key);
       if(!strcmp(temp,key))
	{
	  printf("\n %s is a keyword",key);

	  c++;
	  break;
	}
     }
     rewind(fp2);
  }
  printf("\n Number of preprocessor directives are %d",c);
}