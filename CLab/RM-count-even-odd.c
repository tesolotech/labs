#include"stdio.h"
void main()
{
	int arr[10],i,n,even=0,odd=0;
	printf("enter the element of an array:-");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++)
	{
		if(arr[i]%2==0)
		{
			even++;
		}
		else
		{
			odd++;
		}
	}
	printf("Even:%d\n",even);
	printf("Odd:%d\n",odd);
}
