#include"stdio.h"
int main()
{
	int *ppp;
	printf("size of ppp %d",sizeof(ppp));
	int arr[]={1,2,3};
	int *p=arr;
	char arr1[]={'v','i','k','a','s','h'};
	char *pp=arr1;
	printf("size of arr[]=%d",sizeof(arr));
	printf("\nsize of p=%d",sizeof(p));
	printf("\nsize of arr1[]=%d",sizeof(arr1));
	printf("\nsize of pp=%d",sizeof(pp));
}
