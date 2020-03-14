#include<stdio.h>
void main()
{
	int num,rem=0,rev=0;
	printf("enter the more then two digits no:-");
	scanf("%d",&num);
	while(num!=0)
	{
		rem=num%10;
		rev=rev*10;
		rev=rev+rem;
		num=num/10;
	}
	if(num==rev)
	{
		printf("number is palindrome");
	}
//	printf("Reverse of no:%d\n",rev);
	else
		printf("not palindrome");

}
