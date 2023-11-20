// finding theh area of the circle by using pointer
#include<stdio.h>
main()
{
	double radius,area=0;
	double *pradius=&radius,*parea=&area;
	*parea=3.14*(*pradius)*(*pradius);
	
	printf("radius=%.2lf ,area=%.2lf",*pradius,*parea);
}

