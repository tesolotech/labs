#include"stdio.h"
void main()
{
	int arr[10],i,n;
	printf("enter the size of array:-");
	scanf("%d",&n);
	printf("enter the element in an array:-");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=n-1;i>=0;i--)
	{
		printf("%d, ",arr[i]);
	}

}
