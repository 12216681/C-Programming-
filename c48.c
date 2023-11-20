#include<stdio.h>
main()
{
	int n;
	printf("enter the number:");
	scanf("%d",&n);

	int i;
    for (i=1;i<=n;i++)
    {
    	if(i>10)
	        break;
		printf("%d\n",i);	 
    }
}
