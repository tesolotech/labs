#include"stdio.h"
void main()
{
	int arr[]={0,1,2,3,4};
	int *p;
	for(p=arr+4;p>=arr;p--)
	{
		printf("%d",arr[p-arr]);
	}
}
