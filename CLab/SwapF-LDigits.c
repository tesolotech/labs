#include<stdio.h>
void main()
{
	int num,temp;
	printf("enter the more the one digits no:-");
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
	int swap=temp;
	temp=num;
	num=swap;
	printf("first:-%d\n",temp);
	printf("Last:-%d\n",num);

}
