#include"stdio.h"
void main()
{
	int arr[]={0,1,2,3,4};
	int *p,i;
	for(p=arr+4;i=0;i<=4;i++)
	{
		printf("%d",p[-i]);
	}
}
