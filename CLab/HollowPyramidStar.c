#include"stdio.h"
void main()
{
	int i,j,n;
	printf("enter the no of row:-");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=i;j<n;j++)
		{
			printf(" ");
		}
		for(j=1;j<=(2*i-1);j++)
		{
			if(i==n || j==1 || j==(2*i-1))
			{
				printf("*");
			}
			else
				printf(" ");
		}
		printf("\n");
	}
}
