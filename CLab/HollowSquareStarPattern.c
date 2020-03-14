#include"stdio.h"
void main()
{
	int num,i,j;
	printf("enter the size of row:-");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		for(j=0;j<num;j++)
		{
			if(i==1 || i==num || j==1 || j==num)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}
