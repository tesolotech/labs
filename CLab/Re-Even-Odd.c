#include"stdio.h"
void Even(int a, int b);
void Even(int a,int b)
{
	if(a>b)
		return;

	printf("%d, ",a);
	Even(a+2,b);
}
void main()
{
	int a,b;
	printf("enter initial and ending no:-");
	scanf("%d%d",&a,&b);
	Even(a,b);
}
