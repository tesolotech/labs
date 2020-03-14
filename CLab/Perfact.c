#include"stdio.h"
void main()
{
	int num,i,sum=0,temp;
	printf("enter number");
	scanf("%d",&num);
	temp=num;
	for(i=1;i<num;i++)
	{
		if(num%i==0)
		{
			sum=sum+i;
		}
	}
	if(temp==sum)
		printf("%d is perfact no",temp);
	else
		printf("%d is not perfact no",temp);

}
