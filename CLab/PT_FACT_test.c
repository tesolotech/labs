#include"stdio.h"
void main()
{
	int num,fact=1,i;
	printf("enter maximum size:");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		fact=fact*i;
	}
	printf("Factorial of %d=%d\n",num,fact);
}
