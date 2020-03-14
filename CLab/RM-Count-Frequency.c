#include"stdio.h"
void main()
{
	int arr[10],i,n,count=0;
	printf("enter the size of array:-");
	scanf("%d",&n);
	printf("enter the element in an array:-");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		count=0;
		if(arr[i]==arr[i+1])
		{
			count++;
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d=%d\n",arr[i],count);
	}
}
