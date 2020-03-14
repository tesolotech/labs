#include<stdio.h>
void main()
{
	int i, num, sum=0;
	printf("enter the maximum limits of a number:-");
	scanf("%d",&num);
	for(i=0;i<=num;i++)
	{
		if(i%2==0)
		{
			printf("Number is even%d\n",i);
			sum=sum+i;
		//	printf("sum of N even no is:-%d\n",sum);
		}
	}
	printf("sum of n even no is:-%d\n",sum);

}
