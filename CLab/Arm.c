#include"stdio.h"
void main()
{
	int num,temp,rem,sum=0;
	printf("enter number:");
	scanf("%d",&num);
	temp=num;
	while(num>0)
	{
		rem=num%10;
		sum+=rem*rem*rem;
		num=num/10;
	}
	if(temp==sum)
		printf("number is armstrong");
	else
		printf("not armstrong no");

}
