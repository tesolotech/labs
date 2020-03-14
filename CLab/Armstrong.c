#include<stdio.h>
#include<math.h>
void main()
{
	int num, rev,temp,rem=0,count=0;
	printf("enter a number to test:-");
	scanf("%d",&num);
	temp=num;


	while(temp!=0)
	{
		temp=temp/10;
		count++;
	}



	temp=num;



	while(temp!=0)
	{
		rev=temp%10;
		rem=rem+pow(rev,count);
		temp=temp/10;
	}
	if(rem==num)
	{
		printf("number is armstrong\n");
	}
	else
		printf("not armstrong no\n");
}
