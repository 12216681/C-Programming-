// using string functions 
#include<stdio.h>
#include<string.h>
main()
{
	int i;
	
	char str[20]="hello world";
	i= strlen (str);
	printf("%d\n",i);
	
		printf("%s\n",strlwr(str));
			printf("%s\n",strupr(str));
	printf("%s\n",strrev(str));
}
