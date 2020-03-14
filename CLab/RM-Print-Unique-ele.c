#include"stdio.h"
void main()
{
	int arr[10],temp[10],j,i,n, count;
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
		for(j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				count++;
				temp[j]=0;
			}
		}
		if(temp[i]!=0)
		{
			temp[i]=count;
		}
	}
	for(i=0;i<n;i++)
	{
		if(temp[i]==1)
		{
			printf("%d\t",arr[i]);
		}
	}
}
