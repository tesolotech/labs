#include"stdio.h"
void main()
{
	int i,num,j,k;
	printf("enter the maximum number of row:-");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
	//	printf(" ");
		for(j=0;j<num;j++)
		{
			if(j>=i && j<=num)
			{
				printf("*");
			}
			else
				printf(" ");
		}
		printf("\n");
	}


}
