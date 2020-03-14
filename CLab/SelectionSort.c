#include"stdio.h"
int min(int arr[], int k, int n);

void main()
{
	int arr[10],i,n,loc,temp;
	printf("enter the size of array:-");
	scanf("%d",&n);
	printf("enter the element in an array:-");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n-2;i++)
	{
		loc=min(arr,i,n);
		temp=arr[i];
		arr[i]=arr[loc];
		arr[loc]=temp;
	}
	for(i=0;i<n;i++)
	{printf("%d, ",arr[i]);}

}

int min(int arr[], int index, int size)
{
	int j,loc,min;
	min=arr[index];
	loc=index;
	for(j=index+1;j<size-1;j++)
	{
		if(min>arr[j])
		{
			min=arr[j];
			loc=j;
		}
	}
	return(loc);
}
