#include"stdio.h"
#include"math.h"
int Prime(int n);
int Armstrong(int n);
int Perfect(int n);
void main()
{
	int n;
	printf("enter a number:-");
	scanf("%d",&n);
	if(Prime(n))
	{
		printf("%d is prime number.\n",n);
	}
	else
		printf("%d is not prime.\n",n);
	if(Armstrong(n))
	{
		printf("%d is armstrong no.\n",n);
	}
	else
		printf("%d is not armstrong no.\n",n);
	if(Perfect(n))
		printf("%d is Perfact no.\n",n);
	else
		printf("%d is not perfact no.\n",n);

}
int Prime(int n)
{
	int i;
	for(i=2;i<n/2;i++)
	{
		if(n%i==0)
		{
			return 0;
		}
	}
	return 1;
}
int Armstrong(int n)
{
	int original,sum=0,digits,last;
	original=n;
	digits=(int)log10(n)+1;
	while(n>0)
	{
		last=n%10;
		sum=sum+round(pow(last,digits));
		n=n/10;
	}
	return(original==sum);
}
int Perfect(int n)
{
	int i,sum=0,num;
	num=n;
	for(i=1;i<num;i++)
	{
		if(num%i==0)
		{
			sum=sum+i;
		}
	}
	return(num==sum);
}
