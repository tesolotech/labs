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
		sum=0;
		for(j=0;j<n;j++)
		{
			sum=sum+m[i][j];
		}
	 printf("sum of row:%d=%d\n, ",i+1,sum);
	}
	for(i=0;i<n;i++)
	{
		sum=0;
		for(j=0;j<n;j++)
		{
			sum=sum+m[j][i];
		}
	 printf("sum of column %d=%d\n",i+1,sum);
	}
}
