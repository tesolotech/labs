#include"stdio.h"
void main()
{
	int arr[10],size,pos,i;
	printf("enter the size of element:-");
	scanf("%d",&size);
	printf("enter the element of an array:-");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter the position you want to delete:-");
	scanf("%d",&pos);
	if(pos<0||pos==size+1)
		printf("Invalid postion:-");
	else
	{
		for(i=pos-1;i<size-1;i++)
		{
			arr[i]=arr[i+1];
		}
		size--;
		for(i=0;i<size;i++)
		{printf("%d\t",arr[i]);}
	}
}
