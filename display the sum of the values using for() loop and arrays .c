// take the value from the user and display the sum of the values using for() loop and arrays 
#include<stdio.h>
main()
{
	int sum=0;
	int arr[10];
	int a;
	int b;
	printf("enter the number of elements");
	scanf("%d",&b);
	printf("\n enter the elements\n");
	for (a=0;a<b;a++)
	{
		// use scanf to take the values
		scanf("%d",&arr[a]);
		
	}
	//printf("\n show the elements\n");
	for(a=0;a<b;a++)
	{
		sum=sum+arr[a];
	}
printf("sum is %d",sum);
  }  
