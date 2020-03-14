#include"stdio.h"
void main()
{
	int arr[10],i,j,n;
	printf("enter the size of an array:-");
	scanf("%d",&n);
	printf("enter the element of an array:-");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				for(int k=j;k<n;k++)
				{
					arr[k]=arr[k+1];
				}
				n--;
				j--;
			}
		}
	}
	printf("after deleting duplicate element:");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
}
