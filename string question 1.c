//string question 1 claculating the length of the string
#include<stdio.h>
#include<string.h>
main()
{
	char str[20]="hello world";
	int i=0;
	while(str[i] !='\0')
	{
		i++;
	}
	printf("%d",i);
}
