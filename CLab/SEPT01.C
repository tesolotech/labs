#include"stdio.h"
void main()
{
	int num,rev=0,rem;
	printf("Enter Number:");
	scanf("%d",&num);
	int temp=num;
	while(num>=1)
	{
		rem=num%10;
		rev=(rev*10)+rem;
		num=num/10;
	}
	printf("Reverse%d",rev);
}

