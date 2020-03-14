#include"stdio.h"
int Fact(int);
void main()
{
	int num;
	printf("Enter no:");
	scanf("%d",&num);
	printf("Factorial=%d",Fact(num));
}
int Fact(int num)
{
	if(num>=1)
		return(num*Fact(num-1));
	else
		return 1;
}
