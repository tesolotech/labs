void InsertionSort(int arr[], int size)
{
	int temp,i,j;
	for(i=1;i<size;i++)
	{
		temp=arr[i];
		for(j=i-1;j>=0 &&temp<arr[j];j--)
			arr[j+1]=arr[j];
	}
	arr[j+1]=temp;
}
void main()
{
	int arr[]={12,25,87,89,65,32,23};
	InsertionSort(arr,7);
	for(int i=0;i<7;i++)
	{
		printf("%d , ",arr[i]);
	}

}
