#include"stdio.h"
int Even(int n);
int Odd(int n);
void main()
{
	int n;
	printf("enter a no to test:=");
	scanf("%d",&n);
	printf("Even no %d\n",Even(n));
	printf("Odd %d\n",Odd(n));
}
int Even(int n)
{
	return(n%2==0);
}
int Odd(int n)
{
	return(n%2!=0);
}
