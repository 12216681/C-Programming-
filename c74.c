#include<stdio.h>
int addnum(int);
main()
{
	int num=8;
	printf("sum of a number=%d",addnum(num));
	scanf("\n%d");
}
int addnum(int n)
{
	if(n==0)
	    return n;
	else
	  return n+addnum(n-1);     
	
}
