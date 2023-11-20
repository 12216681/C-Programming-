#include<stdio.h>
sum1(int,int);// declaring a function
sub1(int,int);
main()
{   
   sum1(2,3);//calling a function
   sum1(4,5);
   sub1(8,5);
   
}
sum1(int x,int y)//defining a function
{
	printf("\n%d%d",x+y);
	}
sub1(int u,int v)	
{
	printf("\nsubstraction is%d",u-v);
	
		}		

