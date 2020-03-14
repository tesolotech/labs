#include"stdio.h"
void Reverse(int n);
void main()
{
	int n;
	printf("enter a no:-");
	scanf("%d",&n);
	Reverse(n);
}
void Reverse(int n)
{
	if(n>=0)
		n=n%10;
	Reverse(n/10);
}
