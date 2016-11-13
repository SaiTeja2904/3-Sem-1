#include<stdio.h>
#include<conio.h>
#define max 20
main()
{ int n,m[max],sp,i=0,flag=0,ch,temp,min=999,flag2;
  clrscr();
  printf("Enter the number of memory blocks");
  scanf("%d",&n);
  printf("Enter the memories,-1 for filled");

  for(i=0;i<n;i++)
  {
    scanf("%d",&m[i]);
  }
 printf("\n Enter the space the process is going to occupy");
 scanf("%d",&sp);
 printf("\nEnter Choice \n1.First Fit \n2.Next Fit \n3.Best Fit");
 scanf("%d",&ch);
 switch(ch){

   case 1: for(i=0;i<n;i++)
	{
		if(sp<=m[i] && flag==0)
		{
		 printf("  %d",sp);
		 if((m[i]-sp)>0)
		 printf("  %d",m[i]-sp);
		 flag=1;
		}
		else
		{ if(m[i]!=-1)
		  printf("  %d",m[i]);
		  else
		  printf("  F");
		}
	}
	break;
   case 2:for(i=n-1;i>=0;i--)
		{
		  if(sp<=m[i] && flag==0)
		  {
		    temp=i;
		    flag=1;
		  }
		}
	   for(i=0;i<n;i++)
	   {
	     if(i==temp)
	     {
	       printf("  %d",sp);
	       if((m[i]-sp)>0)
	       printf("  %d",m[i]-sp);
	     }
	     else
	     {
	      if(m[i]==-1)
	       printf("  F");
	      else
	       printf("  %d",m[i]);
	     }
	   }
	   break;

   case 3:for(i=0;i<n;i++)
	  {
	    if(sp<m[i] && min>(m[i]-sp)){
	       min=m[i]-sp;
	       temp=i;
	    }
	  }
		for (i = 0; i<n; i++)
		{
			if (i == temp)
			{
				printf("  %d", sp);
				if ((m[i] - sp)>0)
					printf("  %d", m[i] - sp);
			}
			else
			{
				if (m[i] == -1)
					printf("  F");
				else
					printf("  %d", m[i]);
			}
		}

	       break;

   }
 getch();
}