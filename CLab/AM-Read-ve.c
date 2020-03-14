#include"stdio.h"
void main()
{
	int arr[20],i,n;
	printf("enter the size of array:-");
	scanf("%d",&n);
	printf("enter the element of an array:-");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]<0)
		{
			printf("%d, ",arr[i]);
		}

	}
}
