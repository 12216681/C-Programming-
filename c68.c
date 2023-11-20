// no return and noparameter
#include<stdio.h>
void print1();//declarartion of the function
main()
{
	print1();//calling of the function
	print1();
	
}
void print1()//defining of the fuction
{
	int i;
	for (i=0;i<5;i++);
	print("\n%d");
}
