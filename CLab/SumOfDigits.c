#include<stdio.h>
void main()
{
	int num,sum=0;
	printf("enter the more the two digits no:-");
	scanf("%d",&num);
	while(num!=0)
	{
		int temp=num;
	//	num=num%10;
		temp=temp%10;
		sum=sum+temp;
		num=num/10;
	}
	printf("%d\n",sum);

}
