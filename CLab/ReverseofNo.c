#include"stdio.h"
int Reverse(int a);
void main()
{
	int num;
	printf("Enter number");
	scanf("%d",&num);
	int res=Reverse(num);
	printf("%d",res);
}

int Reverse(int a)
{
	int rev=0,rem;
	while(a>0)
	{
		rem=a%10;
		rev=rev*10+rem;
		a=a/10;
	}
	return (rev);
}
