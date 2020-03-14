#include"stdio.h"
void main()
{
	int num, i;
	printf("enter the number of row:-");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		for(int j=0;j<num;j++)
		{
			printf("*");
		}
	printf("\n");
	}

}
