//jump statements
// break() , continue(),goto()
#include<stdio.h>
main()
{
	int i;
	int number,sum=0.0;
	for (i=10;i<0;i=i-1)
	{
		if(i%2==1)
	    {
	    	goto idontknow;
	    	//continue
			//break;
		    }
	printf("\n %d",i);
	}
idontknow:
	 printf("\n after this not an even number");
	
	
}
