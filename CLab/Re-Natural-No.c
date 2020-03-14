#include"stdio.h"
int Natural(int n, int n1);
void main()
{
	int a,b;
	printf("enter two value maximum & minimum limits:");
	scanf("%d%d",&a,&b);
	int r=Natural(a,b);
}
int Natural(int n, int n1)
{
	if(n>n1)
		return 0;

	printf("%d, ",n);
	return(Natural(n+1,n1));
}
