#include<stdio.h>
main()
{
	int *ptr;
	int x;
	ptr=&x;
	*ptr=0;
	
	printf("x= %d",x);
	printf(" *ptr =%d\n",*ptr);
	(*ptr)++;
	printf("x=%d\n",x);
	printf("*ptr=%d\n",*ptr);
	
	
	
	
}
