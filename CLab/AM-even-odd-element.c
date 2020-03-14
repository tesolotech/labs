#include"stdio.h"
void main()
{
	int arr[10], even[10],odd[10],i,n;
	printf("enter the size of array:-");
	scanf("%d",&n);
	printf("enter the element of an array:-");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		{
			even[i]=arr[i];
			printf("Even= %d\n",even[i]);
		}
		else
		{
			odd[i]=arr[i];
			printf("ODD= %d\n ",odd[i]);
		}
	}
}

