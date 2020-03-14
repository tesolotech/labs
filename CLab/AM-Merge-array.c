#include"stdio.h"
void main()
{
	int arr[10],i,j,n,n1,arr2[10],Merge[20],k;
	printf("enter the size of array:-");
	scanf("%d",&n);
	printf("enter the element in first  array:-");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter the size of second array:-");
        scanf("%d",&n1);
	printf("enter the element in second array:-");
	for(i=0;i<n1;i++)
	{
		scanf("%d",&arr2[i]);
	}
	int mergesize=n+n1;
	int index=0;
	int index2=0;
	for(j=0;j<mergesize;j++)
	{
		if(index>=n||index2>=n1)
		{break;}
		if(arr[index]<arr2[index2])
		{
			Merge[j]=arr[index];
			index++;
		}
		else
		{
			Merge[j]=arr2[index2];
			index2++;
		}
	}
	while(index<n)
	{
		Merge[j]=arr[index];
		j++;
		index++;
	}
	while(index2<n1)
	{
		Merge[j]=arr2[index2];
		j++;
		index2++;
	}
	for(i=0;i<mergesize;i++)
	{
		printf("%d\t",Merge[i]);
	}
}
