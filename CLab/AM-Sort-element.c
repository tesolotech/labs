#include"stdio.h"
void main()
{
	int arr[10],i,j,n,temp[10];
	printf("enter the size of an array:-");
	scanf("%d",&n);
	printf("enter the element in an array:-");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]<arr[j])
			{
				temp[i]=arr[i];
				arr[i]=arr[j];
				arr[j]=temp[i];
			}
		}
	}
	for(i=0;i<n;i++)
	{printf("%d, ",arr[i]);}

}
