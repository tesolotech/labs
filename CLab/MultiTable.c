#include<stdio.h>
void main()
{
	int i,num,table;
	printf("enter a number to generate the table:-");
	scanf("%d",&num);
	for(i=1;i<=10;i++)
	{
		table=i*num;
		printf("%d*%d=%d\n",i,num,table);
	}

}
