#include"stdio.h"
void main()
{
	int num, fact=1,i;
	printf("enter a number to find factorial:-");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		fact=fact*i;
	}
	printf("factorial is:-%d=%d\n",num,fact);
}
