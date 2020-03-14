#include"stdio.h"
void main()
{
	int arr[10],i,n,num,pos;
	printf("enter the size of array:-");
	scanf("%d",&n);
	printf("enter the element of an array:-");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter element you want to insert:-");
	scanf("%d",&num);
	printf("enter the position where you want to insert:-");
	scanf("%d",&pos);
	if(pos>n+1||pos<=0)
	{
		printf("invalid position:");
	}
	else
	{
		for(i=n;i>=pos;i--)
		{
			arr[i]=arr[i-1];
		}
		arr[pos-1]=num;
		n++;
		printf("after insering element:-");
		for(i=0;i<n;i++)
		{printf("%d\t",arr[i]);}
	}
}
