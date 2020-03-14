#include<stdio.h>
void main()
{
	int i, num;
	printf("enter the maximum limit of number:-");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		if(i%2==0)
		{printf("number is even%d\n",i);}
//		else
//		printf("number is odd%d\n",i);
	}
}
