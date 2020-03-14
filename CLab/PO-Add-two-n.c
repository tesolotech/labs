#include"stdio.h"
void main()
{
	int *a,*b,sum,n1,n2;
	a=&n1;
	b=&n2;
	printf("enter two value:-");
	scanf("%d%d",a,b);
	sum=*a+*b;
	printf("Sum of two no:%d\n",sum);
}
