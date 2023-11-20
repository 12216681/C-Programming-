#include<stdio.h>
main()
{
	int marks;
	printf("enter the marks : ");
	scanf("%d",&marks);
	if (marks>=90)
	{
		printf("grade is a");
	}
	else if(marks>80&&marks>70)
	{
		printf("grade is b");
	}
	else
	{
		printf("grade is poor");
	}
	
	
	
	
}
