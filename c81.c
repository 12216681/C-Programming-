#include<stdio.h>
void mystatic();
extern int n=9;
int y=5;
main()
{
	int w;
	   static int x=8,m;
	auto int k;
	printf("m=%d",m);
	mystatic();
	mystatic();
	    printf("\n value of n in main is %d",n);
}

void mystatic()
{
	int j=5;
	printf("\n value of static variable inside function is %d",j);
	j++;
	printf("\n value of extern varial in functio n=%d",n);
	n++;
	
}





