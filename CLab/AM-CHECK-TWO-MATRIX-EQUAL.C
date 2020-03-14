#include"stdio.h"
#define n 2
int main()
{
	int m[n][n],m1[n][n],i,j;
	printf("enter the element in an matrix:-");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&m[i][j]);
		}
	}
	printf("enter the element in an second matrix:-");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&m1[i][j]);
		}
	}
	int count=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(m[i][j]==m1[i][j])
			{
				count=1;
			}
		}
	}
	if(count==1)
	{printf("both matrix is equal:");}
	else
		printf("both are not equal:");
}
