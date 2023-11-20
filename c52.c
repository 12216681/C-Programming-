// for loop
#include<stdio.h>
main()
{
	int a,b=0,c=1,d,i;
	scanf("%d",&a);
	printf("\n%d",b);
	printf("\n%d",c);
	for (i=0;i<a;i++)
	{
		d=b+c;
	    b=c;
	    c=d;

	printf("\t%d",d);
	}
}
