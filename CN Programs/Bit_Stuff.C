#include<stdio.h>
#include<conio.h>
# define MAX 100
void main()
{

   int a[MAX],n,i,j,z;
   clrscr();
   printf("\nEnter Number of bits");
   scanf("%d",&n);
   printf("Enter Bits:\n");
   for(i=0;i<n;i++)
   {
    scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
     if(a[i]==0)
      {
     j=i;
     z=0;
     for(j=j+1;j<=n;j++)
     {
         if(a[j]==1)
          {
        z++;
        if(z==5)
          {  n++;
             for(i=n-1;i>j;i--)
             {
             a[i+1]=a[i];
             }
             a[j+1]=0;
          }
          }

     }

      }
   }

   for(i=0;i<n;i++)
      printf("%d",a[i]);

   getch();
} 
