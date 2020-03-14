 #include"stdio.h"
int Lsearch(int arr[], int, int);
void main()
{
	int arr[10],size,i;
	printf("enter the size of array:");
	scanf("%d",&size);
	printf("Enter the element of an array:-");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter key that you want to search:-");
	int key;
	scanf("%d",&key);
	int res=Lsearch(arr,key,size);
	if(res!=0)
		printf("%d",res);
	else
		printf("Enlement not found:");
}
int Lsearch(int arr[], int key, int size)
{
	int  i;
	for(i=0;i<size;i++)
	{
		if(arr[i]==key)
		{
			return(i);
		}
	}
	return 0;
}
