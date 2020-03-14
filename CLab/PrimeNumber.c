#include"stdio.h"
void main()
{
	int num,temp,i,x=2;
	printf("Enter number:");
	scanf("%d",&num);
	temp=num;
	printf("Prime Number:");
	while(num)
	{
		for(i=2;i<x;i++)
			if(x%i==0)
				break;
		if(i==x)
		{
			printf("%d , ",x);
			num--;
		}
		x++;
	}
}
