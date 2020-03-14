#include"stdio.h"
void main()
{
	int num,num1,i,lcm=1;
	printf("enter two value to find HCF:-");
	scanf("%d%d",&num,&num1);
	int max=(num>num1)?num:num1;
	i=max;
	while(1)
	{
		if(i%num==0 && i%num1==0)
		{
			lcm=i;
			break;
		}
		i=i+max;
	}
	printf("HCF:-%d\n",lcm);
}
