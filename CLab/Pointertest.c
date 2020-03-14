#include"stdio.h"
int main()	
{
	int arr[]={1,2,9,8,6,3,10,7,8,9};
	int *p=arr+1;
	int *q=arr+7;
	printf("%d",q-p);
	return 0;
}
