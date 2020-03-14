#include"stdio.h"
void main()
{
	int arr[10],even[10],odd[10],i,j,n;
	printf("enter the size of an array:-");
	scanf("%d",&n);
	printf("enter the element of an array:-");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
	//	for(j=i+1;j<n;j++)
	//	{
			if(arr[i]%2==0)
			{
				even[i]=arr[i];
				printf("Even %d,",even[i]);
			}
			else
			{
				odd[i]=arr[i];
				printf("Odd %d, ",odd[i]);
			}
	//	}
	}

}
