#include"stdio.h"
#define n 3
void main()
{
	int m[n][n], i,j,sum;
	printf("enter the element in an array:-");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&m[i][j]);
		}
	}
	printf("Sum of diagonal element:");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			{
				sum=sum+m[i][j];
			}
		}
	} 
	printf("%d\n",sum);
}
