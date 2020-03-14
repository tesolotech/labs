#include"stdio.h"
#define n 3
void main()
{
	int m[n][n],i,j,sum=0;
	printf("enter the element in an matrix:");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&m[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i+j==((n+1)-2))
			{
				sum=sum+m[i][j];
			}
		}
	}
	printf("Sum of minor diagonal element is:%d\n",sum);
}
