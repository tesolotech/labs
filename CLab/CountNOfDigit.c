#include<stdio.h>
void main()
{
	int num,count=0;
	printf("enter the n of more then one digits:-");
	scanf("%d",&num);
	while(num>0)
	{
		count++;
		num=num/10;
	}
	printf("Digits=%d\n",count);

}
