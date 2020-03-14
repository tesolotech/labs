#include"stdio.h"
#define n 3
void main()
{
	int m[n][n],m1[n][n],sub[n][n],i,j;
	printf("enter the element in an array:-");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&m[i][j]);
		}
	}
	printf("enter the element in second in an array:-");
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
			sub[i][j]=m[i][j]-m1[i][j];
		}
	}
	printf("After substraction array is:-\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d, ",sub[i][j]);
		}
	}
}
