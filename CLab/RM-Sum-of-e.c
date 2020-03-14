#include"stdio.h"
void main()
{
	int i, arr[12],n,sum;
	printf("enter the size of an array:-");
	scanf("%d",&n);
	printf("enter the element of an array:-");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+arr[i];
	}
	printf("sum of array element %d\n",sum);
}
