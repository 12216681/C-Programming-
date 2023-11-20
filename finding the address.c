//address
#include<stdio.h>
main()
{
	int a[5]={9,4,3,6,7};
	printf("%u",a);
	printf("\n%u",&a[0]);
	printf("\n %u",&a[1]);
		printf("\n %u",&a[4]);
			printf("\n %u",&a[2]);
				printf("\n %u",&a[3]);
	printf("\n %u",&a);
	
	printf("\n%d",sizeof(a));              // in array the size of one integer is four byte
	
}
