int Fact(int n)
{
	if(n==0)
		return 1;
	else
		return(n*Fact(n-1));
}
#include<stdio.h>
void PrintStrong(int s,int e)
{
	int sum, temp;
	while(s!=e)
	{
		sum=0;
		temp=s;
		while(temp!=0)
		{
			sum=sum+Fact(temp%10);
			temp=temp/10;
		}
		if(s==sum)
		{
			printf("%d ,",s);
		}
		s++;
	}
}
#include"stdio.h"
void main()
{
	int n, n1;
	printf("enter initial and ending no:-");
	scanf("%d%d",&n,&n1);
	PrintStrong(n,n1);
}
int Fact(int n);
void PrintStrong(int s, int e);
