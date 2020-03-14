#include"stdio.h"
void main()
{
	int num,rem,rev,sum=0;
	printf("Enter the large digits:");
	scanf("%d",&num);
	while(num>0)
	{
		rem=num%10;
		sum=sum+rem;
		num=num/10;
	}
	printf("Sum of digits:%d",sum);
}
