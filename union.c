//union
#include<stdio.h>
#include<string.h>
union student
{
	char name[20];
	int rollno;
	int age;
	
	
}
s1;
main()
{
	strcpy(s1.name,"abc");
	s1.rollno=1;
	printf("%s",s1.name);
	printf("%d",s1.rollno);
}
