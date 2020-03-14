#include"stdio.h"
void main()
{
	int num, last, arr[10],i;
	printf("enter an number to count:-");
	scanf("%d",&num);
	for(i=0;i<10;i++)
	{
		arr[i]=0;
	}
	int temp=num;
	while(temp!=0)
	{
		last=temp%10;
		temp=temp/10;
		arr[last]++;
	}
	printf("frequency of each digits\n");
	for(i=0;i<10;i++)
	{printf("Frequency of %d=%d\n",i,arr[i]);}

}
