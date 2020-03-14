#include<stdio.h>
void main()
{
	int num,temp;
	printf("enter the more then one digits no:-");
	scanf("%d",&num);
	temp=num;
	while(temp>=10)
	{
		temp=temp/10;
	}
	if(num>0)
	{
		num=num%10;
	}
	int sum=temp+num;
	printf("sum of first and last digits of an number is:%d\n",sum);

}
