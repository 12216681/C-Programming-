// take the value from the user and display those values using for() loop and arrays
#include<stdio.h>
main()
{
	
	int arr[10];
	int a;
	int b;
	printf("enter the number of elements");
	scanf("%d",&b);
	printf("\n enter the elements");
	for (a=0;a<b;a++)
	{
		
		scanf("%d",&arr[a]);
		
	}
	for(a=0;a<b;a++)
	{
		printf("%d \n",arr[a]);
	}
	
  }  
