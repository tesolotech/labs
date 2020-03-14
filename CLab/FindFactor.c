#include"stdio.h"
void main()
{
	int num,i;
	printf("enter an number:-");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			printf("All Factor=%d\n",i);
		}
	}
//	printf("All factor of number:-%d\n",num);

}
