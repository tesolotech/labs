void Natural(int a, int b)
{
	if(a>b)
		return;

	printf("%d, ",a);
	Natural(a+1,b);
}

#include"stdio.h"
void Natural(int a, int b);
void main()
{
	int a,b;
	printf("enter initial and ending no:=");
	scanf("%d%d",&a,&b);
	Natural(a,b);
}
