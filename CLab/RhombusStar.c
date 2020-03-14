#include<stdio.h>
void main()
{
	int i,n,j;
	printf("enter the no of row:-");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	//	printf(" ");
		for(j=0;j<n*2+1;j++)
		{
			if(j>=n-i && j<=n*2-i)
			{
				printf("*");
			}
			else
				printf(" ");
		}
		printf("\n");
	}
}
