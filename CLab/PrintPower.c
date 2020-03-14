#include"stdio.h"
void main()
{
	int i, num, power=1, expon;
	printf("enter the base value:-");
	scanf("%d",&num);
	printf("enter the expon:-");
	scanf("%d",&expon);
	for(i=1;i<=expon;i++)
	{
		power=power*num;
	}
	printf("Power of no is %d*%d=%d\n",num, expon,power);
}
