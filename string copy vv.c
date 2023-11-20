//string copy
#include<stdio.h>
main()
{
	char s1[20]="my uni";
	char s2[20]={"LPU"};
	//strcpy(s1,s2);
	//printf("%s",s1);
	//strcat(s1,s2,2);
	//printf("%s",s1);
	strncat(s1,s2,2);
	printf("%s",s1);

}
