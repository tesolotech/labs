#include"stdio.h"
void main()
{
	int arr[10],i,n,max,min;
	printf("enter the size of array:-");
	scanf("%d",&n);
	printf("enter the element of an array:-");
	for(i=0;i<n;i++)
	{scanf("%d",&arr[i]);}
	max=arr[0];
	min=arr[0];
	for(i=0;i<n;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
		else if(arr[i]<min)
		{
			min=arr[i];
		}
	}
	printf("Maximum is:-%d\n",max);
	printf("Minimum is:-%d\n",min);
}
