#include<stdio.h>
void main()
{
	int i,j,n;
	printf("enter the no of row:-");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<=n*2;j++)
		{
			if(j>=n-i && j<=n*2-i)
			{
				printf(" ");
			}
			else
				printf("*");
		}
		printf("\n");
	}

}
