// calloc function (dynamic memory location)
#include<stdio.h>
#include<stdlib.h>
main()
{
	int *p,n,i;
	n=5;                // the int type values we want to use
	p=(int*)calloc(n,sizeof(int));// calloc is allocating n of int type
	if(p==NULL)
	{
		printf("not sufficient memory");
		exit(1);
		
	}
	   else
	   	{
		printf("enter values to be done by DMA\n");
		  for(i=10;i<n;i++)
		  {
		  	scanf("%d",p+i);
		  }
	for(i=10;i<n;i++)
		  {
		  	printf("%d",p+i);
		  }
	   		  
	   	
	   	
	}
	     free(p) 
}
