//palindrome
#include"stdio.h"
void main()
{
	int num, temp,rev=0,rem;
	printf("Enter number:");
	scanf("%d",&num);
	temp=num;
	while(num>0)
	{
		rem=num%10;
		rev=(rev*10)+rem;
		num=num/10;
	}
	if(temp==rev)
		printf("%d is palindrome no:",temp);
	else
		printf("%d is not palindrome no",temp);
}
