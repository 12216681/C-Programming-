#include<stdio.h>
main()
{
	int arr[3],i;
	for(i=0;i<5;i++)
	{
	printf("\n Enter element %d :",i);
	scanf("%d",&arr[i]);
	}

	printf("the array is : \t");
	for(i=0;i<5;i++)
	printf("%d \t",arr[i]);
}
