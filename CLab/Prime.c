#include<stdio.h>
void main()
{
	int num, prime=1,i;
	printf("enter a number to test:-");
	scanf("%d",&num);
	for(i=2;i<=num/2;i++)
	{
		if(num%i==0)
		{
			prime=0;
		}
	}
	if(prime==1)
	{
		printf("prime no\n");
	}
	else
		printf("not prime\n");
}
