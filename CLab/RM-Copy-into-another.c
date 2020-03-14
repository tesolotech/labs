#include"stdio.h"
void main()
{
	int arr[10],temp[10],i;
	printf("enter the element of an array:-");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++)
	{
		temp[i]=arr[i];
		printf("Copied array element is %d, \n",temp[i]);
	}
}
