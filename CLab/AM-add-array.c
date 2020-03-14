#include"stdio.h"
void main()
{
	int m[10][10],m1[10][10],sum[10][10],i,j,n,n1;
	printf("enter the size of an array:-");
	scanf("%d",&n);
	printf("enter the element in an array:-");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&m[i][j]);
		}
	}
	printf("enter the size of second array:-");
	scanf("%d",&n1);
	printf("enter the element in an matrix:-");
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n1;j++)
		{
			scanf("%d",&m1[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			sum[i][j]=m[i][j]+m1[i][j];
		}
	}
	printf("After sum matrix is this:-\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d, ",sum[i][j]);
		}
	}

}
