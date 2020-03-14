#include"stdio.h"
int Table(int);
void main()
{
	int i,num,Table;
	printf("Enter number for table:");
	scanf("%d",&num);
	for(i=1;i<=10;i++)
	{
	Table=num*i;
	printf("%d*%d=%d\n",num,i,Table);
	}
}////////////////////////////////////////
int Table(int num)
{
	int i;
	for(i=1;i<=10;i++)
		return(num*i);
}
