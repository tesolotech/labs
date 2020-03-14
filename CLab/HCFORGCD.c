#include"stdio.h"
void main()
{
	int num,num1,i,hcf=1;
	printf("enter two number to find HCF:-");
	scanf("%d%d",&num,&num1);
	int min=(num<num1)?num:num1;
	for(i=1;i<=min;i++)
	{
		if(num%i==0 && num1%i==0)
		{
			hcf=i;
		}
	}
	printf("HCF:-%d",hcf);
}
