#include<stdio.h>
void main()
{
	int num,rem=0;
	printf("enter the more then one digits no:-");
	scanf("%d",&num);
	int temp=num;
	while(temp>=10)
	{
		temp=temp/10;
	}
	printf("first digits:-%d\n",temp);
	if(num>0)
	{
		num=num%10;
	}
	printf("last digits is%d\n",num);

}
