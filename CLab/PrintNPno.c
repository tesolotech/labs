#include"stdio.h"
void main()
{
	int num,i,j,prime=1;
	printf("enter the maximum limits");
	scanf("%d",&num);
	for(i=2;i<=num;i++)
	{
		prime=1;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				prime=0;
				break;
			}
		}
	
		if(prime==1)
		{
			printf("%d , ",i);
		}
	}
}