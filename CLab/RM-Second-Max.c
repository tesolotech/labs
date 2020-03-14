#include"stdio.h"
void main()
{
	int arr[10],i;
	printf("enter the element of an array:-");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	int max=arr[0];
	for(i=0;i<5;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i-1];
		}
	}
	printf("second max:-%d, ",max);
}
