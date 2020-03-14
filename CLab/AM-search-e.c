#include"stdio.h"
void main()
{
	int arr[10],i;
	printf("enter the element in an array:-");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	int found=0;
	int key;
	printf("enter the key elemennt:-");
	scanf("%d",&key);
	for(i=0;i<5;i++)
	{
		if(arr[i]==key)
		{
			found=1;
			break;
		}
	}
	if(found==1)
	{
		printf("%d is found at position %d",key,i+1);
	}
	else
	{
		printf("%d is not found in the array",key);
	}
}
