//checking the given string is palindrom number or not
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
	
	if(strcmp(str,str2)=1)
	{
		printf("palindrom no");
		
	}
	else
	{
		printf("not a palindrom no");
	}
	
	
}
