#include"stdio.h"
void main()
{
	int num, temp, rem, arr[10],i;
	printf("enter number to check:-");
	scanf("%d",&num);
	for(i=0;i<10;i++)
	{
		arr[i]=0;
	}
	temp=num;
	while(temp!=0)
	{
		rem=temp%10;
		temp=temp/10;
		arr[rem]++;
	}
	printf("frequency of each digits:-\n");
	for(i=0;i<10;i++)
	{printf("Frequency of %d=%d\n",i,arr[i]);}

}
