#include<stdio.h>
void main()
{
	int i,j,n;
	printf("enter the no of row:-");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		printf(" ");
		for(j=1;j<n;j++)
		{
			if(j==i || j==n-i)
			{
				printf("X");
			}
			else
				printf(" ");
		}
		printf("\n");
	}
}
