#include"stdio.h"
void main()
{
	int num,rem,sum=0;
	printf("Enter number");
	scanf("%d",&num);
	int temp=num;
	while(num>0)
	{
		rem=num%10;
		sum=sum+rem*rem*rem;
		num=num/10;
	}
	if(temp==sum)
		printf("%d no is Armstrong:",temp);
	else
		printf("%d no is not Armstrong",temp);

}
