#include"stdio.h"
#define n 2
void main()
{
	int m[n][n],m1[n][n],multi[n][n],i,j;
	printf("enter the element in first array:-");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&m[i][j]);
		}
	}
	printf("enter the element in second matrix:-");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&m1[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			multi[i][j]=m[i][j]*m1[i][j];
		}
	}
	printf("After multiplication matrix is:-");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d, ",multi[i][j]);
		}
	}
}
