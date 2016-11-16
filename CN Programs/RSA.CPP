#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
void main()
{
	int p,q;
	clrscr();
	cout<<"\nEnter Two Prime Numbers: ";
	cin>>p>>q;
	int n = p*q;
	int v = (p-1)*(q-1);
	int temp = 0,temp1 = 0;
	int i=2;
	int j,e;
	int count = 0;
	do
	{
		count = 0;
		temp1 = 0;
		for(j=1;j<i;j++)
		{
			if(i%j==0)
				count++;
		}
		if(count>1)
		{
			temp1++;
		}
		else if(count==1)
		{
			if(v%i!=0)
			{
				e=i;
				temp++;
			}
			else
				i++;
		}
	}while(temp!=1);
	int d=1;
	for(d=1;d<1000;d++)
	{
		if((e*d)%v==1)
			break;
	}
	int P,C;
	be: cout<<"\nEnter P";
	cin>>P;
	if(P>=n)
	{
		cout<<"\nP should be less than n = "<<n;
		goto be;
	}
	C = pow(P,e);
	C = C%n;
	cout<<"\nC is "<<C;
	temp = P;
	P = pow(C,d);
	P = P%n;
	cout<<"\nP derived from C is "<<P;
	if(temp==P)
	{
		cout<<"\nIt's Matching!\n";
	}
	else
	{
		cout<<"\nIt's Not Matching!\n";
	}
	//cout<<(char)6;
	getch();
}
