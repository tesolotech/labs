#include"stdio.h"
int Power(int a, int b);
void main()
{
	int a,b;
	printf("enter two no:=");
	scanf("%d%d",&a,&b);
	int result=Power(a,b);
	printf("Result=%d\n",result);
}
int Power(int a, int b)
{
	if(b==0)
		return 1;
	if(b>0)
	{
		return(a*Power(a,b-1));
	}
	else
		return 0;
}

