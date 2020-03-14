#include"stdio.h"
void main()
{
	int i,j,num,num1;
	for(i=0;i<9;i++)
	{
		for(j=0;j<9;j++)
		{
			if(j>=9-i)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}
