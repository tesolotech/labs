#include"stdio.h"
#include"string.h"
int BST(int arr[], int, int , int);
void main()
{
	int arr[20],i,size,search;
	printf("enter the size of array:");
	scanf("%d",&size);
	printf("Enter element in an array:-");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter element that you want to search:-");
	scanf("%d",&search);
	printf("element fournd at %d:",BST(arr,0,size-1,search));

}
int BST(int arr[], int start,int end,int ele)
{
	if(end>=start)
	{
		int mid=start+(end-start)/2;
		if(arr[mid]==ele)
		{
			return(mid);
		}
		if(ele>arr[mid])
		{
			return(BST(arr,start,mid-1,ele));
		}
		else
		return(BST(arr,mid+1,end,ele));
	}
	return -1;
}
