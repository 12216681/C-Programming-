// reverse the string without using string function
#include<stdio.h>
#include<string.h>
main()
{
	char str[20]="hello world";
	int i=0,j;
	char temp;
	j=strlen(str)-1;// finding the length of the index value
	while(i<j)
	{
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
		i++;
		j--;
		
		
	}
	printf("%s",str);
}
	
