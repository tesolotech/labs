#include"stdio.h"
void FunPrime(int num)
{
	int i,x=2;
	while(num)
	{
		for(i=2;i<x;i++)
			if(x%i==0)
				break;
		if(i==x)
		{
			printf("%d ,",x);
			num--;
		}
		x++;
	}
}
#include"stdio.h"
void FunPrime(int);
void main()
{
	int num;
	printf("Enter no of term that you have want:");
	scanf("%d",&num);
	FunPrime(num);
}
