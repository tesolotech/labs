#include<stdio.h>
void main()
{
	int i, num, sum=0;
	printf("enter the maximum limits");
	scanf("%d",&num);
	for(i=0;i<=num;i++)
	{
		sum=sum+i;
	}
	printf("Sum=%d\n",sum);

}
