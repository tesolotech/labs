#include"stdio.h"
int Prime(int num);
void PrintPrime(int l, int h);
void main()
{
	int n,n1;
	printf("enter starting range and ending range:-");
	scanf("%d%d",&n,&n1);
	PrintPrime(n,n1);
}
void PrintPrime(int l, int h)
{
	while(l<=h)
	{
		if(Prime(l))
		{
			printf("%d ,",l);
		}
		l++;
	}
}
int Prime(int num)
{
	int i;
	for(i=2;i<num/2;i++)
	{
		if(num%i==0)
		{return 0;}
	}
	return 1;
}
