#include"stdio.h"
void main()
{
	int i,j,num;
	printf("enter the no of row");
	scanf("%d",&num);
	for(i=0;i<num/2;i++)
	{
		for(j=0;j<num/2*2;j++)
		{
			if(j>=num/2-i && j<=num/2*2+i)
			{
				printf("*");
			}
			else
				printf(" ");
		}
		printf("\n");
	}


	for(i=3;i<num/2-2;i++)
	{
		printf(" ");
		for(j=0;j<num*2-1;j++)
		{
			printf("*");
		}
		printf("\n");
	}

	for(i=0;i<num;i++)
	{
		printf(" ");
		for(j=0;j<num*2-1;j++)
		{
			if(j>=i && j<num*2-1-i)
			{
				printf("*");
			}
			else
				printf(" ");
		}
		printf("\n");
	}
}
