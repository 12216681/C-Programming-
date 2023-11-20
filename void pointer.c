// void pointer
#include<stdio.h>
main()
{
	int x=10;
	char ch='A';
	void *ptr;
	ptr=&x;
	printf("the value at ptr %d",*(int*)ptr);
	ptr=&ch;
	printf(" the value at ptr %c",*(char*)ptr);
	
    
}
