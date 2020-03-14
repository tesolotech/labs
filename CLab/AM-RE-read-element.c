#include"stdio.h"
void main()
{
	int arr[10],i,n;
	printf("enter   the size of an arrya:-");
	scanf("%d",&n);
	printf("enter the element in an array:-");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Element of array is:-");
	for(i=0;i<n;i++)
	{
		printf("%d, ",arr[i]);
	}
}
