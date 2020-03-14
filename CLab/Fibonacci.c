#include<stdio.h>
void main()
{
	int num,temp,i,a=0,b=1,c=0;
	printf("enter the maximum limites:-=");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		a=b;
		b=c;
		c=a+b;
		printf("\n%d\n",c);
	}
}
