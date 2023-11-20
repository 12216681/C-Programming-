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
}

void mystatic()
{
	static int j=5;
	printf("\n value of satatic variable inside function is %d",j);
	j++;
}
