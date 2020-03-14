#include"stdio.h"
void main()
{
	int i,num,j,k;
	printf("enter the maximum number of row:-");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
	//	printf(" ");
		for(j=0;j<num*2-1;j++)
		{
			if(j<num-1+i && j>num+1-i)
			{
				printf("*");
			}
			else
				printf(" ");
		}
		printf("\n");
	}


}
