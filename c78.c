#include<stdio.h>
extern int a=10;
main()
{
	printf("\n showing extern value a=%d",a);
   {
  	  // int a=9
  	  printf("\n showing inside a=%d",a);
   
   }
}
