#include"stdio.h"
void main()
{
	int arr[10],temp[10],i,j,n,count;
	printf("enter the size of an array:-");
	scanf("%d",&n);
	printf("enter the element of an array:-");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		temp[i]=-1;
	}
	for(i=0;i<n;i++)
	{
		count=1;
		for(j=i+1;j<n;i++)
		{
			if(arr[i]==arr[j])
			{
				count++;
				break;
			}
		}
	}
	printf("total no of duplicate element in an array is %d\n",count);
}
