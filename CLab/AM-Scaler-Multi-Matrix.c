#include"stdio.h"
#define n 2
void main()
{
	int m[n][n],i,j,multi;
	printf("enter the element in an array:-");
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
			m[i][j]=m[i][j]*2;
		}
	}
	printf("After performing scaler multiplication:-\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d,",m[i][j]);
		}
	}
}
