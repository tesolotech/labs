#include"stdio.h"
void main()
{
	int age;
	printf("enter you age:");
	scanf("%d",&age);
	if(age>=18)
	{
		printf("Eligible for voting");
	}
	else
		printf("Not eligible for voting");
}
