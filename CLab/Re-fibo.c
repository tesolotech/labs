#include"stdio.h"
int fibo(int);
void main()
{
	int i,num;
	printf("enter max ending point:");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		printf("%d, ",fibo(i));
	}
}
int fibo(int n)
{
	int i=1,sum;
	if(n==1||n==2)
		return 1;
	return(fibo(n-1)+fibo(n-2));
}
