#include"stdio.h"
void GetStrong(int start, int end);
long long Fact(int n);
void main()
{
	int n,n1;
	printf("enter start and end postions:-");
	scanf("%d%d",&n,&n1);
	GetStrong(n,n1);
}
void GetStrong(int start, int end)
{
	long long sum;
	int num;
	while(start!=end)
	{
		sum=0;
		num=start;
		while(num!=0)
		{
			sum=sum+Fact(num%10);
			num=num/10;
		}
		if(start==sum)
		{
			printf("%d, ",start);
		}
		start++;
	}

}
long long Fact(int n)
{
	if(n==0)
		return 1;
	else
		return(n*Fact(n-1));
}
