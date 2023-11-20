#include<stdio.h>
void fun1()
{
	auto int a=10;
	printf("\nfun1 output=%d",a);
}
void fun2()
{
	auto int a=20;
	printf("\nfun2 output=%d",a);
	
}
main()
{
	auto int a=30;
	printf("\nfun3 output=%d",a);
	fun1();
	fun2();
	
	
}
