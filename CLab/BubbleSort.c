#include"stdio.h"
void BubbleSort(int arr[], int );
void main()
{
	int arr[10],i,n;
	printf("enter the size of array:");
	scanf("%d",&n);
	printf("enter the element in an array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	BubbleSort(arr,n);
	printf("Sorted array:");
	for(i=0;i<n;i++)
	{
		printf("%d, ",arr[i]);
	}

}


void BubbleSort(int arr[], int size)
{
	int round, i,temp;
	for(round=1;round<size;round++)
	{
		for(i=0;i<=size-1-round;i++)
		{
			if(arr[i]>arr[i+1])
			{
				temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
			}
		}
	}


}
