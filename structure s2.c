// structure s2
#include<stdio.h>
#include<string.h>
union student
{
	char name[20];
	int rollno;
	int age;
	
	
}
s1;
struct teacher
{
	char name[20];
	int rollno;
	int age;
	
}
s2;
main()
{
	printf("size of union is %d",sizeof (s1));
	printf("size of structure is %d",sizeof (s2));
	
}
