#include"stdio.h"
void main()
{
	int i,num,j;
	printf("enter the maximum number of row:-");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		for(j=0;j<i;j++)
		{
			printf("*");
		}
		printf("\n");
	}


}