#include"stdio.h"
void main()
{
	int arr[10],i,negative=0;
	printf("enter the element of an array:-");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++)
	{
		if(arr[i]<0)
		{
			negative++;
		}
	}
	printf("Total -ve element in an array:-%d\n",negative);
}
